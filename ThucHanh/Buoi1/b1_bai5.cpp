//Cho mang 1 chieu các so thuc. Hãy viet hàm de quy dem so luong giá tri duong có trong mang
#include <iostream>
#include <cmath>
using namespace std;
void nhap(float a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

int demSoDuong(float a[], int n){
	if(n == 0){
		return 0;
	}
	if(a[n-1] > 0){
		return 1 + demSoDuong(a, n-1);
	}
	return demSoDuong(a, n-1);
}

int xuat(float a[], int n) {
    cout << "Mang sau khi dem co: " << demSoDuong(a, n) <<" so duong";
}

int main() {
    float a[50]; 
	int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    if (n < 0) {
        cout<<"Hay nhap lai (n>0)!";
        return 0;
    }
    else {
        nhap(a, n);
    }
    demSoDuong(a, n);
    xuat(a, n);
}


