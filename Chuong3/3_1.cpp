#include <iostream>
using namespace std;
//#define Max 50
int ketthuc(int n){
	if(n==0){
		return 0;
	}
}

/*int Nhap(int a[], int n){
	cout << "Nhap so luong phan tu: ";
    cin >> n;
    if(n<=0){
    	return ketthuc(n);
	}
	
    for(int i = 0; i < n; i++){
        cout <<"Nhap a["<<i<<"] = ";
        cin >> a[i];
    }
} 
*/

void Xuat1(int a[], int n){
	cout<<"Mang sau khi da sap xep lai bang interchange: ";
	for(int i=0; i<n; i++){
		cout<<" " << a[i];
	}
}

void interchangeSort(int a[], int n){
	int i, j, doi;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){ // if(b[i] > b[j]){
			if(a[i] > a[j]){	// swap(a[i], a[j]);
				doi = a[i];
				a[i] = a[j];
				a[j] = doi;
			}
		}
	}
}

void Xuat2(int b[], int n){
	cout<<"Mang sau khi da sap xep lai bang bubble: ";
	for(int i=0; i<n; i++){
		cout<<" " << b[i];
	}
}

void bubbleSort(int b[], int n){
	int i, j, doi;
	for(i=0; i<n-1; i++){
		for(j=n-1; j>i; j--){
			if(b[j] < b[j-1]) {
				swap(b[j], b[j-1]);
			}
		}
	}
}

void Xuat3(int c[], int n){
	cout<<"Mang sau khi da sap xep lai bang insert: ";
	for(int i=0; i<n; i++){
		cout<<" " << c[i];
	}
}

void insertionSort(int c[], int n){
	int i, j;
	if(n > 1){
		insertionSort(c, n-1);
	}
	i = n-1;
	j = c[n];
	while(i>=0 && c[i]>j){
		c[i+1] = c[i];
		i--;
	}
	c[i+1] = j;
}

void Xuat4(int c[], int n){
	cout<<"Mang sau khi da sap xep lai select: ";
	for(int i=0; i<n; i++){
		cout<<" " << c[i];
	}
}

void selectionSort(int d[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		int min = i;
		for(j=i+1; j<n; j++){
			if(d[j] < d[min]){
				min = j;
			}
			swap(d[min], d[i]);
		}
	}
}

int main(){
    int a[5] = {4,9,6,2,5};
    int b[6] = {2,9,1,6,8,4};
    int c[7] = {5,6,1,4,12,15,8};
    int d[8] = {13,15,7,3,9,4,20,5};
    interchangeSort(a, 5);
    bubbleSort(b, 6);
    insertionSort(c, 6);
    selectionSort(d, 8);
    //Nhap(a, n);
	Xuat1(a, 5);    
	cout<<"\n";
	Xuat2(b, 6);
	cout<<"\n";
	Xuat3(c, 7);
	cout<<"\n";
	Xuat4(d, 8);
}
