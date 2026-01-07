#!/usr/bin/bash

echo "enter file"
read file

if [[ ! -f $file ]]
then
    echo "File $file does not exist"
    exit 1
fi

count=0
while read -r line
do 
    ((count++))
    echo "$line"
done < $file

echo "$count"