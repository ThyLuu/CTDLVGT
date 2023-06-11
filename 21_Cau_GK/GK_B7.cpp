#include <iostream>
using namespace std;
void heapify(int a[], int n, int i){
	int large = i;
    int trai = 2 * i + 1;
    int phai = 2 * i + 2;
    if (trai < n && a[trai] > a[large]){
    	large = trai;
	}
	if (phai < n && a[phai] > a[large]){
		large = phai;
	}
    if (large != i) {
        swap(a[i], a[large]);
        heapify(a, n, large);
    }
}
 
void heapSort(int a[], int n){
    for (int i = n / 2 - 1; i >= 0; i--){
    	heapify(a, n, i);
	}
    for (int i = n - 1; i > 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main(){
	int a[]={41,23,4,14,56,1};
	int n = sizeof(a) / sizeof(a[0]);
	heapSort(a,n);
	cout<<"Mang sau khi sap xep: ";
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}

