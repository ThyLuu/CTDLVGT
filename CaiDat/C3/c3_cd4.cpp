#include <iostream>
using namespace std;
// pp sap xep chon truc tiep
void sapxep(int a[], int n){
	int min;
	int i,j;
	for(i=0; i<n-1; i++){
		min = i;
		for(j=i+1; j<n; j++){
			if (a[j] < a[min]){
				min = j;
			}
		}
		swap(a[min], a[i]); // hoan vi
	}
}

int main(){
	int a[7] = {8, 4, 1, 6, 5, 2, 9};
	sapxep(a, 7);
	cout<<"Mang sau khi da sap xep: "<<endl;
	for(int i=0; i<7; i++){
		cout<< a[i] <<" ";
	}
}
