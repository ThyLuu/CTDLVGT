#include <iostream>
using namespace std;

void nhap_mang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> arr[i];
    }
}
int xuat_mang(int arr[], int n) {
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
}
void InterchangeSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);
}
int main() {
    int arr[50]; int n;
    cout << "nhap so phan tu cua mang: ";
    cin >> n;
    if (n < 0) {
        cout<<"Hay nhap lai (n>0)!";
        return 0;
    }
    else {
        nhap_mang(arr, n);
    }
    InterchangeSort(arr, n);
    xuat_mang(arr, n);
}
