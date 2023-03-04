#include <iostream> 
using namespace std; 
// tim kiem tuyen tinh  
int tim(int a[], int n, int x) { 
    int i; 
    for (i = 0; i < n; i++){
        if (a[i] == x){
            return i; 
    	}
	}	
    return -1; 
} 
  
int main(){ 
    int a[] = { 1, 2, 3, 4, 7, 9, 10, 40 }; // tinh tu 0 -> a[0] = 1, a[1] = 2, ...
    int x = 10; 
    int n = sizeof(a) / sizeof(a[0]); 
    int kq = tim(a, n, x); 
   	(kq == -1)? cout<<"Khong co phan tu nay trong mang" : cout<<"Phan tu nay o vi tri thu: " <<kq; 
   return 0; 
}
