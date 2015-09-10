__author__ = 'yakov'
__author__ = 'Yakov'


from pycparser import parse_file, c_parser, c_generator
from pycparser.c_ast import *
from copy import deepcopy
import re
import sys

class AssignmentVisitor(NodeVisitor):


            def __init__(self,parents):
                self.parents=parents
                self.count=0
                self.new_funcs = list()
                self.new_funcs=[]


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
                newfc=FuncCall(ID("sprinttf"),ExprList([ID("str"),Constant('string',r'''"%d$%d\n"'''),cast_obj,ID("count")]))
                return newfc


            def build_debug_puts_call(self):
                newfc = FuncCall(ID("debug_puts"),ExprList([ID("str")]))
                return newfc

            def build_funcbody(self,name):

                id_type_obj = IdentifierType(['int32_t'])
                typedecl_obj = TypeDecl(None,[],id_type_obj)
                typename_obj = Typename(None,[],typedecl_obj)
                id_obj = ID(name)
                cast_obj = Cast(typename_obj,id_obj)
                cont_obj = Constant('int','1')
                expr_list_obj = ExprList([cast_obj,cont_obj])
                funccall_obj = FuncCall(ID('platfrom_main_end'),expr_list_obj)
                ret_obj = Return(ID('k'))
                comp_obj = Compound([self.build_char_array_def(),self.build_memset_call(),self.build_sprintf_call(),funccall_obj,self.build_debug_puts_call(),ret_obj])
                return comp_obj



            def find_decl(self,node):

                var_name  =node.name
                p = self.parents[node]
                while (p is not None):
                    for c_name,c in p.children():
                        if (isinstance(c,Decl) and c.name==var_name):
                            return c

                    p=self.parents[p]
                return None

            def visit_Assignment(self, node):

                l_val = node.lvalue
                if isinstance(l_val,UnaryOp):
                    l_val = l_val.children()[0][1]
                elif isinstance(l_val,ArrayRef):
                    while isinstance(l_val,ArrayRef):
                        l_val = l_val.name

                result = self.find_decl(l_val)
                second_param = Decl("count",[],[],[],TypeDecl("count",[],IdentifierType(["int"])),None,None,[])
                p_lst = ParamList([result,second_param])
                td = deepcopy(result.children()[0][1])

                n_obj = td
                while (not isinstance(n_obj,TypeDecl)):
                    n_obj = n_obj.type

                n_obj.declname = 'print'+str(self.count)

                type_obj = FuncDecl(p_lst,td)
                func_decl = Decl('print'+str(self.count),None,None,None,type_obj,None,None)
                func_body = self.build_funcbody(l_val.name)
                funcdef_obj = FuncDef(func_decl,None,func_body)
                self.new_funcs=self.new_funcs+[funcdef_obj]
                id_node1 = ID('print'+str(self.count))
                id_node2 = node.rvalue
                exp_lst_node = ExprList([id_node2,Constant("int",str(self.count))])
                func_call_node = FuncCall(id_node1,exp_lst_node)
                node.rvalue=func_call_node
                self.count+=1





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
src_file = open(sys.argv[1],"r")
src = ""
for line in src_file:
    if not line[0]=="#":
        src+=line
src_file.close()
src = typedef_str + src
src = remove_comments(src)



parser = c_parser.CParser()
ast = parser.parse(src)

ppv1 = ParentPointerVisitor(ast)
ppv1.visit(ast)



av1 = AssignmentVisitor(ppv1.parents)
av1.visit(ast)
ast.ext=ast.ext + av1.new_funcs




generator = c_generator.CGenerator()
str_out = generator.visit(ast)

out_file = open(sys.argv[2],"w")
out_file.write(str_out)
out_file.close()