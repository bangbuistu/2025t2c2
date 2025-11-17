#include <iostream>
using namespace std;

 bool kiemtraamduong(int a){
	if(a<0){
		return false;
	}else if(a>0){
		return true;
	}
}

int main() {
    int n;
    cout << "Nhap so a: ";
    cin >> a;
	   if (kiemtraamduong(a)) {
        cout << n << " la so duong" << endl;
    } else {
        cout << n << " la so am" << endl;
    }

    return 0;
}