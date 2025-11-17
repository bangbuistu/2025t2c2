
echo "Nhap vao N"
i=3
read $N
if [[ $($N%$i) -eq 0 ]] 
then 
echo $N; echo "La boi cua 3"
else 
echo $N; echo "Khong phai la boi cua 3"
fi