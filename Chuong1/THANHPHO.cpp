#include <iostream>
#include <string.h>
using namespace std;

	struct ThanhPho {
		int maTP;
		char tenTP[30];
		float Dientich;
	};
		
	void Nhap(ThanhPho tp[], int &n){	
		for(int i=1; i<=n; i++){
			cout << "Nhap thong tin thanh pho thu: "<<i<<"\n";
			cout << "Nhap ma thanh pho: ";
			fflush(stdin);
			cin >> tp[i].maTP;
			cout << "Nhap ten thanh pho: ";
			fflush(stdin);
			cin >> tp[i].tenTP;
			cout << "Nhap dien tich thanh pho: ";
			fflush(stdin);
			cin >> tp[i].Dientich;
			cout << "\n";
		}	
	}
	
	void Xuat(ThanhPho tp[], int n){	
		for(int i=1; i<=n; i++){
			cout<<"=============================\n";
			cout<<"Thanh pho thu: " << i <<"\n";
			cout<<"Ma thanh pho: " << tp[i].maTP<<endl;
			cout<<"Ten thanh pho: " << tp[i].tenTP<<endl;
			cout<<"Dien tich thanh pho: " << tp[i].Dientich<<endl;
		}
	}
	
	int main(){	
	ThanhPho tp[100];
	int n;
	cout<<"Nhap vao so luong thanh pho: ";
	cin>>n;
	Nhap(tp, n);
	Xuat(tp, n);
}

