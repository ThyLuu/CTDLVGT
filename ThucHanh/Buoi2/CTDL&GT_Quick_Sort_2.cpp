#include <iostream>
using namespace std;
// quick sort - sap xep nhanh
//Nguon : https://viblo.asia/p/thuat-toan-sap-xep-nhanh-quick-sort-eW65G6ROlDO
void sapxep(int a[], int trai, int phai){
	int i, j, x;
	x = a[(trai + phai) / 2];
	i = trai; 
	j = phai;
	do{
		while(a[i] < x) {
			i++;
		}
		while(a[j] > x){
			j--;
		}
		if(i <= j){
			swap(a[i],a[j]); // hoan vi
			i++;
			j--;
		}
	}while(i <= j);
	if(trai < j){
		sapxep(a, trai, j);
	}
	if(i < phai){
		sapxep(a, i, phai);
	}
} 

int main(){
	int a[7] = {8, 4, 1, 6, 5, 2, 9}; // bat dau tu 0 
	sapxep(a, 0, 6); // trai 0 va phai 6
	cout<<"Mang sau khi da sap xep: "<<endl;
	for(int i=0; i<7; i++){
		cout<< a[i] <<" ";
	}
}
