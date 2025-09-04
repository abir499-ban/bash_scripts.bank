#! /usr/bin/bash

read -p "enter a number" num
i=num
p=1

while [[ $i -gt 0 ]]
do 
    p=$((p*i))
    i=$((i-1))
done 

echo "Product is $p"