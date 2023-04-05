include <iostream>
using namespace std;
// Selection sort - sap xep chon truc tiep
//Nguon: https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chon-truc-tiep-selection-sort
void sapxep(int a[], int n){
	int min;
	int i,j;
	// int doi;
	for(i=0; i<n-1; i++){
		min = i;
		for(j=i+1; j<n; j++){
			if (a[j] < a[min]){
				min = j;
			}
		}
		swap(a[min], a[i]); // hoan vi
		/*
		a[min] = doi;
		doi = a[i];
		a[i] = doi;
		*/
	}
}
