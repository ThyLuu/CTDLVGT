#include <iostream>
using namespace std;
// de quy long - Nested Recursion
//nguon : https://freetuts.net/de-quy-long-nested-recursion-2959.html
int dequyLong(int m, int n){
  	if(m == 0){
  		return n + 1;
  	} 
    else if(n == 0){
    	return dequyLong(m - 1, 1);
	}
	else{
		return dequyLong(m-1, dequyLong(m, n-1));
	}
}

int main(){
	int m, n;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	cout << "De quy long: " << dequyLong(m, n);
}
