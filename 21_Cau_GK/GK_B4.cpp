#include <iostream>
using namespace std;
int selectionSort(int a[], int n){
	int min;
	for(int i=0; i<n-1; i++){
		min = i;
		for(int j=i+1; j<n; j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		swap(a[min], a[i]);
	}
}

int main(){
	int a[]={41,23,4,14,56,1};
	int n = sizeof(a) / sizeof(a[0]);
	selectionSort(a,n);
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}

