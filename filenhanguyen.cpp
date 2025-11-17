#include <iostream>
using namespace std;

int main() {
	int n=9;
	cout << "Nhap n vao: ";
	cin >> n;
	if (n%3==0)
		cout << "n la boi cua so 3";
	else
		cout << "n khong la boi cua so 3";
	return 0;
}