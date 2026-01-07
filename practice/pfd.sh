#!/usr/bin/bash

currdir=$(ls)
echo "Curr directory is $(pwd) , $PWD"

for file in $currdir:
do 
    echo "$file"
done

exit 0