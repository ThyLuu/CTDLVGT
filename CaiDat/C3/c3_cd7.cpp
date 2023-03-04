#include <iostream>
using namespace std;
// sap xep cay
void sapxep(int a[], int n){
	int i,j;
    for(i = n/2 - 1; i>=0; i--)   
        sapxep(a ,n, i);
    for(j = n-1 ; j>0 ; j--){   
        swap(a[0], a[j] );  //hoan vi
            sapxep(arr, j, 0);   
    }
}

int main{
	int a[7] = {8, 4, 1, 6, 5, 2, 9}; // bat dau tu 0 
	sapxep(a, 7); 
	cout<<"Mang sau khi da sap xep: "<<endl;
	for(int i=0; i<7; i++){
		cout<< a[i] <<" ";
	}
}
