read -p "nhap vao 1 so nguyen: " n
if [ $((n % 2)) == 0 ]; 
then
	echo " $n la so chan"
else
	echo " $n la so le"
fi
read a
