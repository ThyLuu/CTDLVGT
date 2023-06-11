#include <iostream>
using namespace std;
//Cho mang 1 chieu các so thuc. Hãy viet hàm de quy tìm giá tri lon nhat có trong mang
double max(double a[], int n){
	if(n == 1){
		return a[0];
	}
	return max(a[n-1], max(a, n-1));
}

double min(double a[], int n){
	if(n == 2){
		return min(a[0], a[1]);
	}
	return min(a[n-1], min(a, n-1));
}

int main(){
	double a[] = {-1,-2,-3,4,5,6};
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Max: " << max(a, n) << endl;
	cout << "Min: " << min(a, n);
}
