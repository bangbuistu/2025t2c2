#! /bin/bash
echo -n "Nhap so nguyen";
read n

if((n<0)) ; then 
echo " $n la so am";
else
echo "$n la so duong";
fi