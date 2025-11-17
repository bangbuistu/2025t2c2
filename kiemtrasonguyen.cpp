#include <iostream>

using namespace std;

int main(){
	int n;
	cout << "Nhap vao n";
	cin >> n;
	if (kiemTraBoiCua3(n)){
		cout << n << "la boi cua 3";
	} else {
		cout << n << "khong phai la boi cua 3";
	}
	return 0;
}

bool kiemTraBoiCua3(int n){
	if(n>0){
		if(n%3==0){
			return true;
		}
	}
	return false;
}