#include <iostream>
using namespace std;
// Cho mang 1 chieu các so nguyen. Viet hàm tính tong các so chan trong mang bang phuong pháp de quy

void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

long TongSoChan(int a[], int n){
	if(n == 0){
		return 0;
	}
	if(a[n-1] % 2 == 0){
		return TongSoChan(a, n-1) + a[n-1];
	}
	return TongSoChan(a, n-1);
}

int xuat(int a[], int n) {
    cout << "Mang sau khi tinh tong: " << TongSoChan(a, n);	 
}

int main() {
    int a[50]; 
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
    TongSoChan(a, n);
    xuat(a, n);
}
