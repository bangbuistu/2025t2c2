#include <iostream>
using namespace std;

void ktSoAmDuong(int n){
	if (n < 0){
		cout << n << " la so am" << endl;
	}
	else{
		cout << n << " la so duong" << endl;
	}
}

int main(){
	
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	ktSoAmDuong(n);
	
	return 0;
}