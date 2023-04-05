#include <iostream>
using namespace std;
// interchange sort - sap xep doi cho truc tiep
//Nguon : https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-doi-cho-truc-tiep-interchange-sort
void nhap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> arr[i];
    }
}

int xuat(int arr[], int n) {
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
}

void InterchangeSort(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[j] < a[i])
                swap(a[i], a[j]);
}

int main() {
    int a[50]; 
	int n;
    cout << "Nhap so phan tu trong mang: ";
    cin >> n;
    if (n < 0) {
        cout<<"Hay nhap lai (n>0)!";
        return 0;
    }
    else {
        nhap(a, n);
    }
    InterchangeSort(arr, n);
    xuat(arr, n);
}
