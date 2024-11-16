#!/bin/bash

./zad2.sh 2 3 4 &
wait $!
if [ $? -eq 1 ]; then
	./zad2.1.sh 2 3 4 &
	wait $!
	if [ $? -eq 1 ]; then
		echo "Można zbudować trójkąt"
	else
		echo "Nie można zbudować trójkąta"
	fi
fi

exit 0
