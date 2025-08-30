#!/usr/bin/bash

ls | while read -r file
     do
            if [[ -f $file ]]
            then 
                wc -w $file 
            fi 
    done 
