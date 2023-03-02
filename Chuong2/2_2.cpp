#include<stdio.h>
#include<conio.h>
// T(n) = n! = 1 x 2 x 3 x … x n.
long GiaiThua(int n){
    if(n == 1){
        return 1;
	}	
    return GiaiThua(n-1)*n;
}

int main(){
    int n;
    printf("Nhap n = "); 
	scanf("%d", &n);
	
    printf("Giai thua cua %d! = %d", n,GiaiThua(n));

    getch();
    return 0;
}
