#include<bits/stdc++.h>
using namespace std;

class may
{
        char maMay[30];
        char kieuMay[30];
        char tinhTrang[30];
    public:
        void nhap();
        void xuat();
};
void may::nhap()
{
    cout<<"Nhap ma may: ";
    fflush(stdin);gets(maMay);
    cout<<"Nhap kieu may: ";
    fflush(stdin);gets(kieuMay);
    cout<<"Nhap tinh trang: ";
    fflush(stdin);gets(tinhTrang);
}
void may::xuat()
{
    cout<<"\nMa may: "<<maMay;
    cout<<"\nKieu may: "<<kieuMay;
    cout<<"\nTinh trang: "<<tinhTrang;
}
class quanLy
{
        char maQL[30];
        char hoTen[30];
    public:
        void nhap();
        void xuat();
};
void quanLy::nhap()
{
    cout<<"Nhap ma quan ly: ";
    fflush(stdin);gets(maQL);
    cout<<"Nhap ho ten quan ly: ";
    fflush(stdin);gets(hoTen);
}
void quanLy::xuat()
{
    cout<<"\nMa quan ly: "<<maQL;
    cout<<"\nHo ten quan ly: "<<hoTen;
}
class phongMay
{
        int maPhong;
        char tenPhong[30];
        int dienTich;
        quanLy x;
        may *y;
        int n;
    public:
        void nhap();
        void xuat();
};
void phongMay::nhap()
{
    cout<<"Nhap ma phong: ";
    cin>>maPhong;
    cout<<"Nhap ten phong: ";
    fflush(stdin);gets(tenPhong);
    cout<<"Nhap dien tich: ";
    cin>>dienTich;
    cout<<"Nhap so luong may: ";
    cin>>n;
    x.nhap();
    y = new may [n];
    for (int i = 0; i < n; i++)
    {
        y[i].nhap();
    }
    
}
void phongMay::xuat()
{
    cout<<"\nMa phong: "<<maPhong;
    cout<<"\nTen phong: "<<tenPhong;
    cout<<"\nDien tich: "<<dienTich<<"m"<<char(253);
    x.xuat();
    for (int i = 0; i < n; i++)
    {
        y[i].xuat();
    }
    
}
int main()
{
    phongMay a;
    a.nhap();
    a.xuat();
    return 0;
}