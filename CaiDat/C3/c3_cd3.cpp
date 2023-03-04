#include <iostream>
using namespace std;
// pp sap xep doi cho truc tiep
void sapxep(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i] > a[j]){
				swap(a[i], a[j]); //hoan vi a[i] va a[j]
			}
		}
	}
}

int main(){
	int a[7] = {8, 4, 1, 6, 5, 2, 9};
	int i;
	sapxep(a, 7);
	cout<<"Mang sau khi da sap xep: "<<endl;
	for(i=0; i<7; i++){
		cout << a[i] <<" ";
	}
}
