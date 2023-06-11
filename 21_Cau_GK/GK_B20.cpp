#include <iostream>
using namespace std;
// Cho mang 1 chieu các so thuc. Hãy viet hàm de quy sap xep các giá tri trong mang tang dan
void sort(double a[], int n){
	if(n == 1){
		return ;
	}
	else {
		sort(a, n-1);
		if(a[n-1] < a[n-2]){
			swap(a[n-1], a[n-2]);
			sort(a, n-1);
		}
	}
}

int main(){
	double a[] = {-1,-2,-3,4,5,6};
	int n = sizeof(a) / sizeof(a[0]);
	sort(a, n);
	cout << "Sap xep tang dan: ";
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
}
