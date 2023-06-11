#include <iostream>
using namespace std;
int binarySearch(int a[], int n, int x){
	int trai = 0;
	int phai = n-1;	
	int giua;
	do{
		giua = (trai + phai)/2;
		if(a[giua] == x){
			return giua;
		}
		else if(x < a[giua]){
			phai = giua - 1; 
		}
		else {
			trai = giua + 1;
		}
	}while(trai <= phai);
	return -1;
}

int main(){
	int a[]={2,3,4,10,40};
	int n = sizeof(a) / sizeof(a[0]);
	int x = 5; // so can tim
	int kq = binarySearch(a,n,x);
	if(kq != -1){
		cout << "Vi tri cua phan tu " <<x<< " la : "<<binarySearch(a,n,x); 
	}
	else {
		cout << "Khong tim thay";
	}
}

