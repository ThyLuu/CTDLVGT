#include <iostream>
using namespace std;
#define Max 100
int ketthuc(int n){
	if(n==0){
		return 0;
	}
}
int main(){
	int n;
    int a[Max];
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    if(n<=0){
    	return ketthuc(n);
	}
    for(int i = 0; i < n; i++){
        cout <<"Nhap a["<<i<<"] = ";
        cin >> a[i];
    }
    
    int sx;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){ // tang dan thi >
                // Hoan vi giua a[i] va a[j]
                sx = a[i];
                a[i] = a[j];
                a[j] = sx;        
            }
        }
    }
    
    cout<<"Mang sau khi da sap xep lai: ";
    for(int i = 0; i < n; i++){
        cout<<" " << a[i];
    }   
}
