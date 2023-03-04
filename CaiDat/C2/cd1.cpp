#include <iostream>
using namespace std;
//de quy
int GiaiThua(int n){
    int giai_thua = 1;
    for (int i = 1; i <= n; i++){
        giai_thua *= i;
	}
    return giai_thua;
}

int main(){
    int n;
    cout <<"Nhap n: ";
    cin >> n;
    cout <<"Giai thua cua " << n << "! la: " << GiaiThua(n);
    return 0;
}
