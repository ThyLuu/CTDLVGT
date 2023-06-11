#include <iostream>
using namespace std;
int interchangeSort(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j]){
				swap(a[j], a[i]);
			}
		}
	}
}

int main(){
	int a[]={41,23,4,14,56,1};
	int n = sizeof(a) / sizeof(a[0]);
	interchangeSort(a,n);
	cout <<"Sau khi sap xep: ";
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}

