#!/usr/bin/bash

read -p "Enter the directory path:" dir_path
if [ ! -d $dir_path ]
then
    echo "$dir_path is  Not a valid directory path"
    exit 1
fi

echo "displaying all the sub directories inside $dir_path"
ls $dir_path

# output:
# Enter the directory path:.
# displaying all the sub directories inside .
# FCFS.c  a.out  file_count.sh  subdir.sh