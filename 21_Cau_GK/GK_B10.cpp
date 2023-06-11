#include <iostream>
using namespace std;
// Cho mang 1 chieu c�c so nguy�n. Viet ham tinh tong c�c so chan trong mang bang phuong ph�p de quy.
int tongChan(int a[], int n){
	if(n==0){
		return 0;	
	}
	if(a[n-1] % 2 == 0){
		return tongChan(a, n-1) + a[n-1];
	}
	return tongChan(a, n-1);
}

int main(){
	int a[]={1,2,3,4,5,6};
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Tong cac so chan la: " << tongChan(a, n);
//	cout << "Nhap n: ";
//	cin >> n;
//	for(int i=1; i<=n; i++){
//		cout << "Nhap a[" << i << "]: ";
//		cin >> a[i];
//	}
}
