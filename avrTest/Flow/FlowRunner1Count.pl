
use strict;
use Time::HiRes;
use File::stat;

my $inturrupted=0;
$SIG{INT}=\&myhand;

sub myhand
{
    	print"########################### main ##################################";
	print "\n caught $SIG{INT}",@_,"\n";
}

my $SuspiciousCFiles = "~/Desktop/avrTest/SuspiciousCFiles";
my $WorkFolder = "/specific/a/home/cc/students/cs/baryehudai/Desktop/avrTest/WorkFolder";
my $cfile = "avrtest.c";
my $ofile = "avrtest.elf";


my $Golden = "O0";

my $compileOut="compile_out.txt";

my $cmd;


########################### main ##################################


my $counter = 0;
my $diffs = 0;
my $crashs = 0;
while (1 - $inturrupted) {
	$counter++;
	
	print "running flow #$counter\n";
	print "diffs #$diffs\n";
	print "crashs #$crashs\n";

	my $diff_ratio = ($diffs/$counter)*100;
	my $crash_ratio = ($crashs/$counter)*100;
	print "different checksum ratio: $diff_ratio%\n";
	print "crash ratio: $crash_ratio%\n";

  	system "perl /specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/Flow/AVRTestALONCount.pl 1";
	
	my $exit_value = $?;  
	if ($exit_value==0) {
		next;		
	}	
	if ($exit_value==255) {
		$diffs++;
		next;		
	}
	$crashs++;
	if ($inturrupted eq 1) {last;}
}

##################################################################
