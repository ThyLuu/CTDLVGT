#include <iostream>
using namespace std;
//Cho mang 1 chieu các so thuc. Hãy viet hàm de quy kiem tra mang có thoa man tính chat “toàn giá tri âm”
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
