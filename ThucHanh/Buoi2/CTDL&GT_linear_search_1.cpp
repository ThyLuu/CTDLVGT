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
