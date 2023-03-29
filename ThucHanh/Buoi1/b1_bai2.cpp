#include <iostream>
#include <cmath>
using namespace std;
// Viet ham de quy tính tong cua bieu thuc sau day: S(x, n) = x + x^2/2! + x^3/3! + … + x^n/n!

long TongBieuThuc(float x, int n){
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return x;
	}
	return (1 + x/n) * TongBieuThuc(x, n-1) - (x/n) * TongBieuThuc(x, n-2);
}

int main() {
	int n; 
	float x;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap x: ";
    cin >> x;
    if (n < 0) {
        cout<<"Hay nhap lai (n>0)!";
    }
    else {
        cout << "Tong bieu thuc : " << TongBieuThuc(x, n);
    }
}
