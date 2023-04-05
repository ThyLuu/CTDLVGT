#include <iostream>
using namespace std;
// de quy tuyen tinh - Linear Recursion
//Nguon : https://freetuts.net/de-quy-tuyen-tinh-2946.html
int dequyTuyenTinh(int n){
  if(n == 0){
  	return 1; 
  }
  return n * dequyTuyenTinh(n-1);
}

int main() {
  int n;
  cout<<"Nhap giai thua can tinh: ";
  cin>>n;
  cout<<"Sau khi de quy tuyen tinh "<<n<<"! = "<<dequyTuyenTinh(n);
}
