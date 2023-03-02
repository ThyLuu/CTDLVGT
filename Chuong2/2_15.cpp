#include<stdio.h>
#include<math.h>
#include<conio.h>
int a[5];
bool Ktra(int x, int y){
	for(int i = 1; i < x ;i++){
		if(a[i] == y || abs(i-x) == abs(a[i] - y)){
			return false;
		}
	}
	return true;
}

void Xuat(int n){
	for(int i=1; i<=n; i++){
		printf("%3d", a[i]);
	}		
	printf("\n");
}

void Test(int i,int n){
	for(int j = 1; j<=n; j++){ //dat thu quan hau o cot 1 den cot n
		if(Ktra(i,j)){
			a[i] = j;
			if(i == n) {
				Xuat(n);
			}	
			Test(i+1,n); 
		}
	}
}

int main(){
	int n = 8; // ban co 8x8
	Test(1,n);
	
	getch();
	return 0;
}
