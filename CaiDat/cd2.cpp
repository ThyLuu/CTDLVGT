#include <iostream>
using namespace std;
//day finonacci
int f(int n) {
    if (n < 0) {
        return -1;
    } 
	else if (n == 0 || n == 1) {
        return n;
    }
	else {
        return f(n - 1) + f(n - 2);
    }
}

int main() {
 	int i;
    cout << "10 so dau tien cua day fibonacci: \n";
        for (i = 0; i < 10; i++) {
        cout << f(i) << " ";
    }    
}
