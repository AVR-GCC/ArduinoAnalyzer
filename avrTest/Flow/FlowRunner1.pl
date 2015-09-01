
use strict;
use Time::HiRes;
use File::stat;

my $inturrupted=0;
$SIG{'INT'} = sub {$inturrupted=1; die "FlowRunner Interrupted...\n" ;};
my $SuspiciousCFiles = "~/Desktop/avrTest/SuspiciousCFiles";
my $WorkFolder = "/specific/a/home/cc/students/cs/baryehudai//Desktop/avrTest/WorkFolder";
my $cfile = "avrtest.c";
my $ofile = "avrtest.elf";


my $Golden = "O0";

my $compileOut="compile_out.txt";

my $cmd;

#######################################################################

sub getLoggingTime {

    my ($sec,$min,$hour,$mday,$mon,$year,$wday,$yday,$isdst)=localtime(time);
    my $nice_timestamp = sprintf ( "%04d%02d%02d-%02d:%02d:%02d",
                                   $year+1900,$mon+1,$mday,$hour,$min,$sec);
    return $nice_timestamp;
}


########################### main ##################################


my $counter = 1;
 
while (1 - $inturrupted) {
  print "running flow #$counter\n";
  system "perl /specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/Flow/AVRTestALON.pl -1";
  my $timestamp = getLoggingTime();
  print "*******************************\n";	   
  print "Flow crashed! - saving suspects\n";
	print "*******************************\n";
  system "mkdir $SuspiciousCFiles/$timestamp";
  system "cp $WorkFolder/${Golden}avrout.txt $SuspiciousCFiles/$timestamp/${Golden}avrout.txt";
  system "cp $WorkFolder/gcc$ofile $SuspiciousCFiles/$timestamp/gcc$ofile";
  system "cp $WorkFolder/$cfile $SuspiciousCFiles/$timestamp/$cfile";
  system "cp $WorkFolder/$compileOut $SuspiciousCFiles/$timestamp/$compileOut";
  system "cp $WorkFolder/$compileOut $SuspiciousCFiles/$timestamp/$compileOut";
  foreach my $OPT (("O0", "O1", "O2", "O3", "Os")){
	   system "cp $WorkFolder/${OPT}avrout.txt $SuspiciousCFiles/$timestamp/${OPT}avrout.txt";
	   system "cp $WorkFolder/$OPT$ofile $SuspiciousCFiles/$timestamp/$OPT$ofile";
  }
  if ($inturrupted eq 1) {last;}
  $counter += 1;
}

##################################################################