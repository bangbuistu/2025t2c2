#!bin/bash

echo "Nhap vao N"
read $N
if [ $N%3 -eq 0 ] 
then 
echo $N; echo "La boi cua 3"
else 
echo $N; echo "Khong phai la boi cua 3"
fi
