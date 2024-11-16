#!/bin/bash

a=$1
b=$2
c=$3

if [ "$a" -gt 0 ] && [ "$b" -gt 0 ] && [ "$c" -gt 0 ]; then
    exit 1
fi
exit 0
