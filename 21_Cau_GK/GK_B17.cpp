#include <iostream>
using namespace std;
//Cho mang 1 chieu c�c so thuc. H�y viet h�m de quy t�nh tong c�c gi� tri c� trong mang.
int tong(double a[], int n){
	if(n == 0){
		return 0;
	}
	return tong(a, n-1) + a[n-1];
	return tong(a, n-1);
}

int main(){
	double a[] = {1,2,3,4,5,6};
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Tong: " << tong(a, n);
}
