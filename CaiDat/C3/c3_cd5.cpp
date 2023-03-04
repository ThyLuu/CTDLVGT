#include <iostream>
using namespace std;
// sap xep chen truc tiep
void sapxep(int a[], int n){
	int pos, i;
	int x;
	for(i=1; i<n; i++){
		x = a[i]; 
		pos = i-1;
		while((pos >= 0) && (a[pos] > x)){
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x; // chen x vao danh sach
	}
}

int main(){
	int a[7] = {8, 4, 1, 6, 5, 2, 9};
	sapxep(a, 7);
	cout<<"Mang sau khi da sap xep: "<<endl;
	for(int i=0; i<7; i++){
		cout << a[i] <<" ";
	} 
}
