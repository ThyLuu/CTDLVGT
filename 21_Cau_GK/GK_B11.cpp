#include <iostream>
using namespace std;
// Cho mang 1 chieu các so thuc. Viet hàm dem so luong giá tri duong trong mang bang phuong pháp de quy.
int demDuong(double a[], int n){
	if(n == 0){
		return 0;
	}
	if(a[n-1] > 0){
		return demDuong(a, n-1) + 1;
	}	
	return demDuong(a, n-1);
}

int main() {
	double a[] = {-1,-2,-3,4,5,6};
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Co " << demDuong(a, n) <<" gia tri duong" ;
//	cout << "Nhap n: ";
//	cin >> n;
//	for(int i=0; i<n; i++){
//		cout << "Nhap a[" << i << "]: ";
//		cin >> a[i];
//	}
	
}
