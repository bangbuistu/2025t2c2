#include<iostream>
using namespace std;
//viet ham kiem tra so nguyen n nhap vao la duong hay am
int main() {
	int n;
	cout << "nhap so nguyen n trong mang:";
	cin >> n;
	int arr[10];
	for (int i = 0; i < n; i++) {
		cout << "nhap pt" << i << ":";
		cin >> arr[i];
	}
	cout << "mang vua nhap: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "" << endl;;
	}
	if (n < 0 ) {
		cout << " khong co so nguyen am ";
	}else {
		cout << "co so nguyen am";
	}
}