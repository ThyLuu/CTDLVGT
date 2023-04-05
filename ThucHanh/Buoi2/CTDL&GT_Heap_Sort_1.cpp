#include <iostream>
using namespace std;
// heap sort - sap xep cay 
//Nguon: https://www.geeksforgeeks.org/heap-sort/
void heapify(int a[], int n, int i){
	int lon = i;
	int trai = 2 * i + 1;
	int phai = 2 * i + 2;
	if (trai < n && a[trai] > a[i]){ // trai < n va a[trai] > a[i]
		lon = trai;
	}
	if (phai < n && a[phai] > a[lon]){ // phai < n va a[phai] > a[i]
		lon = phai;
	}
	if (lon != i) { // lon khac i
		swap(a[i], a[lon]); //hoan vi
		heapify(a, n, lon);
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
