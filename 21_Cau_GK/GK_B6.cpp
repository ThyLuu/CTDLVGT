#include <iostream>
using namespace std;
int PhanDoan(int a[], int left, int right){
	int p = a[right];
	int i = left - 1;
	for(int j=left; j<=right-1; j++){
		if(a[j] < p){
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i+1], a[right]);
	return (i+1);
}

void quickSort(int a[], int left, int right){
	if(left < right){
		int pd = PhanDoan(a, left, right);
		quickSort(a, left, pd-1);
		quickSort(a, pd+1, right);
	}
}

int main(){
	int a[]={41,23,4,14,56,1};
	int n = sizeof(a) / sizeof(a[0]);
	quickSort(a,0,n-1);
	cout<<"Mang sau khi sap xep: ";
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}

