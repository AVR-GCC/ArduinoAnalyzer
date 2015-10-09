############################################
#   Arduino compile & upload Flow
#   Requires root permissions & physical COM
#   
#   *writes checksum to file
############################################


##################
# install
#arguments: 1-srcFile, 2-device, 3-com, 4-checksum_out_file 
# srcFile=$1
# device=$2
# COM=$3
# output_file=$4

###################
base=$PWD
echo "Installing in - $base"
echo "Creating directories"
#create folders
	#Work area:
	dir=./workFolder
	mkdir $dir
		mkdir $dir/flow
		mkdir $dir/debug
		mkdir $dir/arduino
	#Sources:
	dir=./src
	mkdir $dir
		mkdir $dir/runtime
	#Utilities:
	dir=./utils
	mkdir $dir
	#results:
	dir=./results
	mkdir $dir
		mkdir $dir/failedCFiles
		mkdir $dir/lineMarked
		#TODO change name ^
		

#copy src files
	src_dir="/home/student/avr/public/avrTest/src"
	cp -Rf $src_dir $base/
	#TODO: make sure the files are already present

#Install Utilities:
###################
echo "Installing Utilities..."
	dir=$base/utils
	cd $dir
	mkdir $dir/temp
	#csmith
	echo "	Installing csmith..."
		url="https://embed.cs.utah.edu/csmith/csmith-2.2.0.tar.gz"
		package="$dir/temp/csmith.tar.gz"
		appDir="$dir/csmith/"
		#download
		wget $url -O $package
		#un-pack
		mkdir $appDir
		tar -C $appDir -xvf $package
		
		#install
			#dependencies
			apt-get install m4
			apt-get install g++

		cd $appDir/csmith-2.2.0
		./configure
		make
		#test
		#TODO
	cd $dir

	#avr-gcc
	echo "	Installing avr-gcc..."
		#package found in base
		#TODO - place file
		avr_pkg="/home/student/avr/public/avr-toolchain.tar.gz"
		
		package="$dir/temp/avr-toolchain.tar.gz"
		appDir="$dir/avr-gcc/"
		#download
		#wget $url -O $package
		cp $avr_pkg $package
		#un-pack
		mkdir $appDir
		tar -C $appDir -xvf $package
		
		#install
		#NOTHING TO DO...
		#test
		#TODO
	cd $dir

	#simulavr
	echo "	Installing simulavr..."
		url="http://download.savannah.nongnu.org/releases/simulavr/simulavr-1.0.0-binary-linux32.tar.gz"
		package="$dir/temp/simulavr.tar.gz"
		appDir="$dir/simulavr/"
		#download
		wget $url -O $package
		#un-pack
		mkdir $appDir
		tar -C $appDir -xvf $package
		
		#install
		#NOTHING TO DO...
		#test
		#TODO
	cd $dir

	#pycparser
	echo "	Installing pycparser..."
		url="https://github.com/eliben/pycparser/archive/master.zip"
		package="$dir/temp/pycparser.zip"
		appDir="$dir/pycparser/"
		#download
		wget $url -O $package
		#un-pack
		mkdir $appDir
		unzip $package -d $appDir
		
		#install
		cd $appDir/pycparser-master
		python setup.py install
		#test
		#TODO
	cd $dir
	rm -Rf $dir/temp
cd $base

#update config file
	#TODO change 'home = ' to pwd
	settings_path=$base/src/settings.py
	echo "home = \"$base\"/" > $settings_path.temp
	cat $settings_path >> $settings_path.temp
	cp $settings_path.temp $settings_path
	rm $settings_path.temp

#test console
#test flow
#test debug

#print finished
#start console

