#!/usr/bin/bash


read -p "ENter a string" str

rev=""

for ((i=${#str} - 1 ; i>=0; i--))
do
    rev="$rev${str:$i:1}"
done

echo "Reversed string $rev"

exit 0