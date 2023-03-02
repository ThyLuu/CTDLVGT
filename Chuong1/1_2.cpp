#include<stdio.h>
#include<math.h>
#include<conio.h>

struct HonSo{
    int SoNguyen;
    int Tu; 
    int Mau;
};

typedef struct HonSo HONSO;
void NhapHonSo(HONSO &);
void XuatHonSo(HONSO);

void NhapHonSo(HONSO &hs){
    printf("Nhap so nguyen: ");
    scanf("%d", &hs.SoNguyen);
    printf("Nhap so nguyen: ");
    scanf("%d", &hs.Tu);
    printf("Nhap so nguyen: ");
    scanf("%d", &hs.Mau);
}

void XuatHonSo(HONSO hs){
    printf("Hon so : %d %d/%d", hs.SoNguyen, hs.Tu, hs.Mau);
}

int main(){
    HONSO hs;
    NhapHonSo(hs);
    XuatHonSo(hs);
    getch();
    return 0;
}
