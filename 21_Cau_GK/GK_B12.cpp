#include <iostream>
using namespace std;
//Cho mang 1 chieu c�c so nguy�n. Viet h�m de quy xuat mang.
void xuatMang(int a[], int n, int i = 0){
	if(i == n){
		return;
	}
	cout << a[i] <<" ";
	xuatMang(a, n, i+1);
}

int main(){
	int a[] = {1,2,3,4,5,6};
	int n = sizeof(a) / sizeof(a[0]);
//	cout << "Nhap n: ";
//	cin >> n;
//	for(int i=0; i<n; i++){
//		cout << "Nhap a[" << i << "]: ";
//		cin >> a[i];
//	}
	cout << "So phan tu trong mang: ";
	xuatMang(a, n);
}
