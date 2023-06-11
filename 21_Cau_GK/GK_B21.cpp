#include <iostream>
using namespace std;
//Tính T(n) = 1 x 2 x 3 x … x n
int giaiThua(int a[], int n){
	if(n == 0){
		return 1;
	}
	if(n > 0){
		return giaiThua(a, n-1) * n;
	}
}

int main(){
	int a[10];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "T=1x2x3x...xn = " << giaiThua(a, n);
}
