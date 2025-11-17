ktSoAmDuong(){
	n=$1;
	
	if (( n < 0 )); then
		echo "$n la so am";
	else
		echo "$n la so duong";
	fi
}

read -p "Nhap so: " num;
ktSoAmDuong "$num"

read