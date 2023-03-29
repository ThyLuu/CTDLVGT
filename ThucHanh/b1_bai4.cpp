//Tinh so hang thu n cua day
//X(0) = 1
//X(n) = n^2.x(0) + (n – 1)^2.x(1) + … + (n – i)^2.x(i) + … + 2^2.x(n – 2) + 1^2.x(n – 1)
#include <iostream>
#include <cmath>
using namespace std;

long tinhXn(int n){
	if(n == 0){
		return 1;
	}
	long s = 0;
	for (int i = 0; i<=n; i++){
		s = s + i * i * tinhXn(n - i);
	}
	return s;
}

int main() {
	int n; 
    cout << "Nhap n: ";
    cin >> n;
    long s = tinhXn(n);
    if (n < 0) {
        cout<<"Hay nhap lai (n>0)!";
    }
    cout << "Ket qua : " << s;
}
