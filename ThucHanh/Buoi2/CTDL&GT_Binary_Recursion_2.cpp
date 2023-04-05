#include <iostream>
using namespace std;
//de quy nhi phan -Binary Recursion
//nguon: https://freetuts.net/de-quy-nhi-phan-binary-recursion-2953.html 
int fib(int n){
  	if(n <= 2) {
  		return 1;
  	}
 	 return fib(n - 1) + fib(n - 2);
}
 
int main() {
  int n;
  cout<<"Nhap vi tri can tim fibonacci: ";
  cin>>n;
  cout<<"\nSo fibonacci o vi tri "<<n<<": "<<fib(n);
}
