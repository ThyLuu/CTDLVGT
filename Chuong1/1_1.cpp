#include <iostream>

using namespace std;

struct THANHPHO
{
	int mau;
	int	tu; 
};

void Nhap(PhanSo &ps)
	{	
		cout << "Nhap mau: "; 
		cin >> tp.mau; 
		
		cin.ignore(); 
		cout << "Nhap tu: "; 
		cin >> tp.tu;
	 } 
	 

void Xuat(PhanSo ps)
	{
		cout << "Mau la: " << ps.mau <<endl;
		
		cout << "Tu la: " << ps.tu <<endl;
	 } 


int main()
{	
	PhanTu ps;
	Nhap(ps);
	Xuat(ps); 
}

