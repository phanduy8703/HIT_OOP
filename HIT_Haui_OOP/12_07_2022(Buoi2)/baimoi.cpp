#include<bits/stdc++.h>
using namespace std;

class hang
{
        int maHang;
        char tenHang[30];
        int donGia;
    public:
        void nhap();
        void xuat();
};
void hang::nhap()
{
    cout<<"Nhap ma hang: ";
    cin>>maHang;
    cout<<"Nhap ten hang: ";
    fflush(stdin);gets(tenHang);
    cout<<"Nhap don gia: ";
    cin>>donGia;
}
void hang::xuat()
{
    cout<<"\nMa hang: "<<maHang;
    cout<<"\nTen hang: "<<tenHang;
    cout<<"\nDon gia: 0"<<donGia;
}
class phieu
{
        int maPhieu;
        int n;
        hang *x;
    public:
        void nhap();
        void xuat();
};
void phieu::nhap()
{
    cout<<"Nhap ma phieu: ";
    cin>>maPhieu;
    cout<<"Nhap so mat hang : ";
    cin>>n;
    x = new hang [n];
    for (int i = 0; i < n; i++)
    {
        x[i].nhap();
    }
    
}
void phieu::xuat()
{
    cout<<"Ma phieu: "<<maPhieu;
    for (int i = 0; i < n; i++)
    {
        x[i].xuat();
    }
    
}
int main()
{
    phieu a;
    a.nhap();
    a.xuat();
    return 0;
}