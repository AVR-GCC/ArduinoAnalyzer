
from pycparser import parse_file, c_parser, c_generator
from pycparser.c_ast import *
from copy import deepcopy
import re
import sys

class AssignmentVisitor(NodeVisitor):

            def __init__(self,parents,src_code,src_code_no_mods):
                self.src_code=src_code.splitlines()
                self.src_code_no_mods = src_code_no_mods.splitlines()
                self.parents=parents
                self.count=0
                self.new_funcs = list()
                self.new_funcs=[]
                self.new_funcs_decls = []

            def build_char_array_def(self):
                new_array_decl = ArrayDecl(TypeDecl("str",[],IdentifierType(['char'])),Constant('int','20'),[])
                new_decl = Decl('str',[],[],[],new_array_decl,None,None)
                return new_decl

            def build_memset_call(self):
                newfc=FuncCall(ID("memset"),ExprList([ID("str"),Constant('int','0'),Constant('int','20')]))
                return newfc


            def build_sprintf_call(self):

                id_type_obj = IdentifierType(['int32_t'])
                typedecl_obj = TypeDecl(None,[],id_type_obj)
                typename_obj = Typename(None,[],typedecl_obj)
                id_obj = ID("k")
                cast_obj = Cast(typename_obj,id_obj)
                newfc=FuncCall(ID("sprintf"),ExprList([ID("str"),Constant('string',r'''"%d$%d\n"'''),cast_obj,ID("count")]))
                return newfc


            def build_debug_puts_call(self):
                newfc = FuncCall(ID("debug_puts"),ExprList([ID("str")]))
                return newfc

            def build_funcbody(self,name):

                id_type_obj = IdentifierType(['int32_t'])
                typedecl_obj = TypeDecl(None,[],id_type_obj)
                typename_obj = Typename(None,[],typedecl_obj)
                id_obj = ID('k') # parameter passed to platform main end
                cast_obj = Cast(typename_obj,id_obj)
                cont_obj = Constant('int','1')
                expr_list_obj = ExprList([cast_obj,cont_obj])
                funccall_obj = FuncCall(ID('platform_main_end'),expr_list_obj)
                ret_obj = Return(ID('k'))
                comp_obj = Compound([self.build_char_array_def(),self.build_memset_call(),self.build_sprintf_call(),funccall_obj,self.build_debug_puts_call(),ret_obj])
                return comp_obj

            def find_structfield_dec(self,node):

                struct_nameid = node.name
                struct_field_nameid = node.field
                result = self.find_decl(struct_nameid)

                type_obj = result.type.type
                result = self.find_decl(type_obj)
                list_of_fields = result.type.decls
                for dec in list_of_fields:
                    if dec.name == struct_field_nameid.name:
                        return dec

                return None

            def find_decl(self,node):

                var_name  =node.name
                p = self.parents[node]
                while (p is not None):
                    if isinstance(p, FuncDef):
                        list_of_params = p.decl.type.args.params
                        for c in list_of_params:
                            if c.name == var_name:
                                return c
                    for c_name,c in p.children():
                        if (isinstance(c,Decl) and c.name==var_name):
                            return c
                        elif isinstance(node, Struct) and \
                                 isinstance(c, Decl) and \
                                 c.name is None and \
                                 c.type.name == var_name:
                                    return c
                        elif isinstance(node, Union) and \
                                 isinstance(c, Decl) and \
                                 c.name is None and \
                                 c.type.name == var_name:
                                    return c
                    p=self.parents[p]
                return None

            def fix_first_param(self,value,deref_count):

                value.name = 'k'
                value.init = None
                value.storage = []
                while isinstance(value.type,ArrayDecl):
                    value.type = value.type.type
                type_decl_ref = value.type
                while not isinstance(type_decl_ref,TypeDecl):
                    type_decl_ref = type_decl_ref.type
                type_decl_ref.declname='k'
                for x in range(0,deref_count):
                    value.type=value.type.type
                return value

            def visit_Assignment(self, node):

                line_number = int(node.coord.line)
                line_of_code = self.src_code[line_number-1]
                line_number = self.src_code_no_mods.index(line_of_code)

                deref_count=0;
                l_val = node.lvalue
                if isinstance(l_val,UnaryOp):
                    while isinstance(l_val,UnaryOp):
                        if l_val.op == '*': #assume consecutive derefs only
                            deref_count += 1
                        l_val = l_val.children()[0][1]

                elif isinstance(l_val,ArrayRef):
                    while isinstance(l_val,ArrayRef):
                        l_val = l_val.name

                if isinstance(l_val, StructRef):
                    result = self.find_structfield_dec(l_val)
                else:
                    result = self.find_decl(l_val)
                result = deepcopy(result)
                result = self.fix_first_param(result,deref_count)
                second_param = Decl("count",[],[],[],TypeDecl("count",[],IdentifierType(["int"])),None,None,[])
                p_lst = ParamList([result,second_param])

                td = deepcopy(result.children()[0][1])

                n_obj = td
                while (not isinstance(n_obj,TypeDecl)):
                    n_obj = n_obj.type

                n_obj.declname = 'print'+str(self.count)
                type_obj = FuncDecl(p_lst,td)
                func_decl = Decl('print'+str(self.count),[],[],[],type_obj,None,None)
                self.new_funcs_decls += [func_decl]
                if isinstance(l_val, StructRef):
                    func_body = self.build_funcbody(l_val.field.name)
                else:
                    func_body = self.build_funcbody(l_val.name)

                funcdef_obj = FuncDef(func_decl,None,func_body)

                self.new_funcs=self.new_funcs+[funcdef_obj]
                id_node1 = ID('print'+str(self.count))
                id_node2 = node.rvalue


                exp_lst_node = ExprList([id_node2,Constant("int",str(line_number+1))])
                func_call_node = FuncCall(id_node1,exp_lst_node)
                self.count+=1
                for c_name,c in node.children():
                    self.visit(c)

                node.rvalue=func_call_node






class ParentPointerVisitor(NodeVisitor):
    def __init__(self,ast):
        self.parents = dict()
        self.parents[ast] = None
        pass
    def generic_visit(self, node):
        """ Called if no explicit visitor function exists for a
            node. Implements preorder visiting of the node.
        """
        for c_name, c in node.children():
            self.parents[c] = node
            self.visit(c)


typedef_str = r"""
typedef signed char 	int8_t;
typedef unsigned char 	uint8_t;
typedef signed int 	int16_t;
typedef unsigned int 	uint16_t;
typedef signed long int 	int32_t;
typedef unsigned long int 	uint32_t;
typedef signed long long int 	int64_t;
typedef unsigned long long int 	uint64_t;

"""
comment_re = re.compile(
    r'(^)?[^\S\n]*/(?:\*(.*?)\*/[^\S\n]*|/[^\n]*)($)?',
    re.DOTALL | re.MULTILINE
)

def comment_replacer(match):
    start,mid,end = match.group(1,2,3)
    if mid is None:
        # single line comment
        return ''
    elif start is not None or end is not None:
        # multi line comment at start or end of a line
        return ''
    elif '\n' in mid:
        # multi line comment with line break
        return '\n'
    else:
        # multi line comment without line break
        return ' '

def remove_comments(text):
    return comment_re.sub(comment_replacer, text)



def addprints():

    # open the source file and read it line by line
    # into two variables: one contains the source verbatim, the other
    # skips all preprocessor directives

    src_file = open(sys.argv[1],"r")
    src = ""
    src_no_modifications = ""
    pack_structs = False
    for line in src_file:
        src_no_modifications+=line
        if not line[0] == "#":
            src+=line
        elif "#pragma pack" in line[0]:
            pack_structs=True

    src_file.close()
    src = typedef_str + src
    src = remove_comments(src)

    # Parse the source code



    parser = c_parser.CParser()
    ast = parser.parse(src)

    ppv1 = ParentPointerVisitor(ast)
    ppv1.visit(ast)



    av1 = AssignmentVisitor(ppv1.parents,src,src_no_modifications)
    av1.visit(ast)
    # remove unnecessary typedefs
    ast.ext=ast.ext[8:]

    # add forward declarations of functions and the functions themselves to the AST
    count = 0
    while isinstance(ast.ext[count],Decl):
        count += 1
    ext1 = ast.ext[:count] + av1.new_funcs_decls+ast.ext[count:]+av1.new_funcs
    ast.ext=ext1

    # generate C code and consider adding pragma pack if needed

    generator = c_generator.CGenerator()
    str_out = generator.visit(ast.ext[0])

    str_out = '''#include "csmith.h"\n#include <stdio.h>\n
    '''
    for next_entry in ast.ext:

        if isinstance(next_entry,Decl) and isinstance(next_entry.type,Struct) and pack_structs:
            str_out += '''
    #pragma pack(push)
    #pragma pack(1)
    '''
            str_out += generator.visit(next_entry)+";\n"
            str_out += '''#pragma pack(pop)\n'''

        elif isinstance(next_entry,Decl):
            str_out += generator.visit(next_entry)+";\n"
        else:
            str_out += generator.visit(next_entry)+"\n"

    out_file = open(sys.argv[2],"w")
    out_file.write(str_out)
    out_file.close()


if __name__ == '__main__':
	addprints()
