#!/bin/bash 
# change these per each homework 
#	link to tests:
#	number of tests: 
numtests=93
#	command to execute test: 
command="./hw3 < ./tests/t\$i.in >& ./tests/t\$i.res"
tmpdir="selfcheck_tmp"


if [ ! -f scanner.lex ] 
	then
	echo "File scanner.lex not found!"
	exit
fi

if [ ! -f parser.ypp ] 
	then
	echo "File parser.ypp not found!"
	exit
fi

if [ ! -f hw3_output.cpp ] 
	then
	echo "File output.cpp not found!"
	exit
fi

if [ ! -f hw3_output.hpp ] 
	then
	echo "File output.hpp not found!"
	exit
fi

if [ ! -f Makefile ]
	then
		echo "File Makefile not found!"
		exit
fi

make

if [ ! -f hw3 ] 
	then 
	echo "Cannot build submission!" 
	exit 
fi 

i="0"

while [ $i -lt $numtests ] 
	do 
	eval $command  # Fails to $i into it
	diff ./tests/t$i.res ./tests/t$i.out &> /dev/null 
	if [[ $? != 0 ]] 
		then
		echo "Failed test #"$i"!" 
		exit 
	fi 
	i=$[$i+1] 
done 

echo "Finished tests - GREAT SUCCESS" 
exit
