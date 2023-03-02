#include<stdio.h>
#include<conio.h>
#include<math.h>
#define Max 100 
 
void NhapMang(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
}

int TongSoChan(int a[], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            tong += a[i]; //tong = tong + a[i]
        }
    }
    return tong;
}
 
int main()
{
    int n;
 	int a[Max];
    
    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0 || n > Max);
 
    NhapMang(a, n);
    XuatMang(a, n);
 	printf("\n");
    printf("Tong so chan = %d", TongSoChan(a, n));
    
    getch();
}
