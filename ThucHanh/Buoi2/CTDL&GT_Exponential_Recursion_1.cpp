#include <iostream>
using namespace std;
//de quy da tuyen - Exponential Recursion
//nguon: https://freetuts.net/de-quy-da-tuyen-exponential-recursion-2958.html
void dayNhiPhan(int i, int n, int *x){
    int val; // la gia tri có the gan vao trong x
    for (val = 0; val < 2; val++){
        x[i] = val;
        if (i == (n-1)){ // neu i la phan tu cuoi cua day
            int j;
            for(j = 0; j < n; j ++){
                cout<<x[j];
            }
            cout<<"\n";
        }
		else{ 
            dayNhiPhan(i+1, n, x);
        }
    }
