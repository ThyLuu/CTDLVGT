#include <iostream>
using namespace std;

int nhap(int a[], int n){
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"] : ";
		cin>>a[i];
	}
}

void interchangeSort(int a[], int n){
	int i, j, doi;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){ // if(b[i] > b[j]){
			if(a[i] > a[j]){	// swap(a[i], a[j]);
				doi = a[i];
				a[i] = a[j];
				a[j] = doi;
			}
		}
	}
}

void xuat(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<" " << a[i] << " ";
	}
}

int main(){
	int a[20];
	int n;
	nhap(a, n);
	interchangeSort(a, n);
	cout<<"Mang sau khi da sap xep lai bang interchange: "<< xuat(a, n);
	//interchangeSort(a, n);
	//xuat(a, n);
}
