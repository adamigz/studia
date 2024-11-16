#!/bin/bash

a=$1
b=$2
c=$3

if [ $(($a + $b)) -gt $c ] && [ $(($a + $c)) -gt $b ] && [ $(($b + $c)) -gt $a ]; then
	exit 1
fi 
exit 0
