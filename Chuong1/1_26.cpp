#include<stdio.h>
#include<conio.h>

struct MatHang
{
    char TenMatHang[20];
    int Dongia;
    int SoLuongTon;
};
typedef struct MatHang MATHANG;

void Nhap(MATHANG &mh)
{
	fflush(stdin);
    printf("Nhap ten mat hang: \n");
    gets(mh.TenMatHang);

    printf("Nhap don gia: \n");
    scanf("%d", &mh.Dongia);

    printf("Nhap so luong ton: \n");
    scanf("%d", &mh.SoLuongTon);
}

void Xuat(MATHANG mh)
{
    printf("Ten mat hang: %s\n", mh.TenMatHang);
    printf("Don gia: %d\n", mh.Dongia);
    printf("So luong ton: %d\n", mh.SoLuongTon);
}

int main()
{
    MATHANG mh1;
    Nhap(mh1);
    Xuat(mh1);

    getch();
    return 0;
}
