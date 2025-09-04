#! /usr/bin/bash


read -p "enter actual username" username
read -p "enter name to be validated" uname

if [[ $username -eq uname ]]
then
    echo "username is validated"
else
    echo "entered username is not validated"
fi