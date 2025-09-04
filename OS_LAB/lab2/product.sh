#! /usr/bin/bash

p=1

for ((i=1; i<=5; i++))
do 
    p=$((p*i))
done 

echo "Product:$p"