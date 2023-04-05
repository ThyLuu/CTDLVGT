#include <iostream>
using namespace std;
bool isEven(int n);
bool isOdd(int n);
// de quy tuong ho - Mutual Recursion
//nguon: https://freetuts.net/de-quy-tuong-ho-mutual-recursion-2961.html 
bool isEven(int n){
  	if(n == 0){
  		return true;
	}
    else{
    	return isOdd(n - 1);
	}
}
 
bool isOdd(int n){
  	return !isEven(n);
}

int main(){
	int n = 10;
  	bool kq = isEven(n);
  	if(kq == true){
  		cout<<n<<" la so chan";
	}
  	else {
  		cout<<n<<" la so le";
	  }
    
 
}
