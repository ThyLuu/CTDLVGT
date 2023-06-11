#include <iostream>
using namespace std;
int linearSearch(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if(a[i] == x){
			return i;
		}
	}
	return -1;
}

int main(){
	int a[]={2,3,4,10,40};
	int n = sizeof(a) / sizeof(a[0]);
	int x = 10; // so can tim
	int kq = linearSearch(a,n,x);
	if(kq != -1){
		cout << "Vi tri cua phan tu " <<x<< " la : "<<kq;
	}
	else {
		cout << "Khong tim thay";
	}
}

