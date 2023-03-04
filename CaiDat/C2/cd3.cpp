#include <iostream>
using namespace std;
//Mot so dang giai thuat de quy thuong gap
int cong(int so) {
    if (so > 1) {
        return (so + cong(so - 1));
    } 
	else {
        return 1;
    }
}

int main() {
    int n;
    cout <<"Nhap n: ";
    cin >> n;
    int kq;
    kq = cong(n);
    cout << "Ket qua: " << kq << endl;
    return 0;
}
