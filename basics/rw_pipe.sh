#!/usr/bin/bash

echo "enter filename"
read file

if [ ! -f $file ]
then echo "file not found"
exit 1
fi 

cat $file > "file2.txt" 