#!/usr/bin/bash


count=0

while read -r LINE 
do
	echo "$count| $LINE"
	((count++))
done <$1
