#include<stdio.h>
#include<math.h>
#include<conio.h>

struct MatPhangTD{
    int Ox;
    int Oy; 
};

typedef struct MatPhangTD MPTD;
void NhapToaDo(MPTD &);
void XuatToaDo(MPTD);

void NhapToaDo(MPTD &mptd){
    printf("Nhap Ox: ");
    scanf("%d", &mptd.Ox);
    printf("Nhap Oy: ");
    scanf("%d", &mptd.Oy);
    
}

void XuatToaDo(MPTD mptd){
    printf("Mat phang toa do Ox Oy : %d %d", mptd.Ox, mptd.Oy);
}

int main(){
    MPTD mptd;
    NhapToaDo(mptd);
    XuatToaDo(mptd);
    getch();
    return 0;
}
