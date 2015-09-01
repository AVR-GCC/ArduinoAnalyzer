
use Config;
#$SIG{FPE} = \&meHandleINT;

sub meHandleINT {
   my $signame =  shift;   #Grab signal name from passed input
   die "Caught Signal: SIG$signame";
}

my $compileOut="compile_out.txt";
my $SuspiciousCFiles = "~/Desktop/avrTest/SuspiciousCFiles";
my $WorkFolder = "/specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder";
my $cfile = "avrtest.c";
my $ofile = "avrtest.elf";
system "cp $WorkFolder/$compileOut $SuspiciousCFiles/$timestamp/$compileOut";
	system "WorkFolder/gccavrtest.elf";
	system "echo done";
	
