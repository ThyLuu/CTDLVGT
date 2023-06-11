#include <iostream>
using namespace std;
//Cho mang 1 chieu c�c so thuc. H�y viet h�m de quy kiem tra mang c� thoa man t�nh chat �to�n gi� tri �m�
bool giaTriAm(double a[], int n){
	if(n == 0){
		return true;
	}
	bool check = giaTriAm(a, n-1);
	bool lastCheck = (a[n-1] < 0);
	return (check && lastCheck); 
}

int main(){
	double a[] = {-1,-2,-3,-4,-5,-6};
	int n = sizeof(a) / sizeof(a[0]);
	bool kq = giaTriAm(a, n);
	if(kq){
		cout << "Mang toan gia tri am";
	}
	else {
		cout << "Van co gia tri duong";
	}
}
