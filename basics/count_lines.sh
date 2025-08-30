#!/usr/bin/bash

files=$(ls)

for file in $files
do
    if [[ -f $file ]] 
    then
        word_count=$(wc -w $file)
        echo "$word_count"
    fi
done