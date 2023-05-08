#!/bin/bash

echo "enter the year"
read n 
if(let n%4==0)
then
echo "$n is a leap year"
else
echo "$n is not a leap year"
fi