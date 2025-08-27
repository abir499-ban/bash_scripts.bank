#!/usr/bin/bash

## using string test command -z to check if argustment is empty or not
if [ -z "$1" ]
then 
    echo "No level provided. You are at the same level as script : $0"
     exit 1
fi 

## going up in the directory tree 
LEVEL=$1 
CDIR="."

for (( i=1; i<=$LEVEL; i++))
do
    CDIR="../$CDIR"
done 


## run command cd with the CDIR to change the directory
cd $CDIR || { echo "failed to change direcory" ; exit 1;}


## run command pwd to get the current directory
echo "You are now in"
pwd


##open a new bash shell
$SHELL



