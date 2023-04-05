#include<iostream>
using namespace std;
//tim kiem nhi phan = de quy
//Nguon: https://blog.luyencode.net/thuat-toan-tim-kiem-nhi-phan/ 
int tim(int a[], int trai, int phai, int x) {
    int giua;
    while(trai <= phai) {
        giua = (trai + phai) / 2;
        if (a[giua] == x){
            return giua;
    	}
        if (x > a[giua]){
            trai = giua + 1;
    	}
		else{
            phai = giua - 1;
   		}
    }
    return -1; // khi ko tim dc vi tri trong mang
}

int main() {
    int a[] = {2, 4, 10, 15, 20, 25, 30, 31, 38, 44, 66};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 25; // tim so 25
    int kq = tim(a, 0, n-1, x);
 
    cout <<"Phan tu " << x <<" o vi tri: " << kq << endl;
}
