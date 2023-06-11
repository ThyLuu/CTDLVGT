#include <iostream>
using namespace std;
//Cho mang 1 chieu các so thuc. Hãy viet hàm de quy tính tong các giá tri duong có trong mang
int tongDuong(double a[], int n){
	if(n == 0){
		return 0;
	}
	if(a[n-1] > 0){
		return tongDuong(a, n-1) + a[n-1];
	}
	return tongDuong(a, n-1);
}

int main(){
	double a[] = {-1,-2,-3,4,5,6.5};
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Tong: " << tongDuong(a, n);
}
