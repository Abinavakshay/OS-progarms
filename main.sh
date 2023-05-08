#!/bin/bash

echo "enter the number;"
read n 
if(let n%2==0)
then 
echo "$n is even number"
else
echo"$n is odd number"
fi