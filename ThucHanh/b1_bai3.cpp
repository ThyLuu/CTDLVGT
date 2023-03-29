// Viet ham tính so hang thu n cua hai day sau:
// X(0) = 1
// Y(0) = 0
// X(n) = x(n – 1) + y(n – 1) (n > 0)
// Y(n) = 3 * x(n – 1) + 2 * y(n – 1) (n > 0)
#include <iostream>
#include <cmath>
using namespace std;
long tinhXn(int);
long tinhYn(int);	

long tinhXn(int n){
	if(n == 0){
		return 0;
	}
	return tinhXn(n - 1) + tinhYn(n - 1);
}

long tinhYn(int n){
	if(n == 0){
		return 1;
	}
	return 3 * tinhXn(n - 1) + 2 * tinhYn(n - 1);
}

int main() {
	int n; 
    cout << "Nhap n: ";
    cin >> n;
    if (n < 0) {
        cout<<"Hay nhap lai (n>0)!";
    }
    cout << "Ket qua 1 : " << tinhXn(n);
    cout << "\n";
    cout << "Ket qua 2 : " << tinhYn(n);
}
