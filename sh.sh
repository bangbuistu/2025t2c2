echo "nhap vao so n";
read n;
if [ $[ $n % 3 ] -eq 0 ]; then 
echo "$n la boi cua 3";
else
echo "$n khong la boi cua 3";
fi
