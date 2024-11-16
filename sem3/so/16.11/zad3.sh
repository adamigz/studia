#!/bin/bash

trap ./napis.sh USR1
trap ./koniec.sh USR2
while true
do
 sleep 5
done
exit 0
