#include<bits/stdc++.h>
using namespace std;

class Nsx
{
        int maNsx;
        char tenNsx[30];
        char dcNsx[100];
    public:
        void nhap();
        void xuat();
};
void Nsx::nhap()
{
    cout<<"Nhap ma NSX: ";
    cin>>maNsx;
    cout<<"Nhap ten NSX: ";
    fflush(stdin);gets(tenNsx);
    cout<<"Nhap dia chi NSX: ";
    fflush(stdin);gets(dcNsx);
}
void Nsx::xuat()
{
    cout<<"\nMa NSX: "<<maNsx;
    cout<<"\nTen NSX: "<<tenNsx;
    cout<<"\nDia chi: "<<dcNsx;
}
class Hang
{
        int maHang;
        char tenHang[30];
        Nsx x;
    public:
        void nhap();
        void xuat();
};
void Hang::nhap()
{
    cout<<"Nhap ma hang: ";
    cin>>maHang;
    cout<<"Nhap ten hang: ";
    fflush(stdin);gets(tenHang);
    x.nhap();
}
void Hang::xuat()
{
    cout<<"\nMa hang: "<<maHang;
    cout<<"\nTen hang: "<<tenHang;
    x.xuat();
}
int main()
{
    Hang a;
    a.nhap();
    a.xuat();
    return 0;
}