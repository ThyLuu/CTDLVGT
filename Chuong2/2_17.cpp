#include<stdio.h>
#include<math.h>
#include<conio.h>
// Tinh S(n) = 1^2 + 2^2 + ... + n^2
long TongBinhPhuong(int n){
	if(n == 1){
		return 1;
	}
	return TongBinhPhuong(n-1) + n*n;
}

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	printf("1^2 + 2^2 + ... + %d^2 = %d",n,TongBinhPhuong(n));
	
	getch();
}

