#include<bits/stdc++.h>
using namespace std;

class Hang
{
        char maHang[30];
        char tenHang[30];
        int donGia;
        int soLuong;
    public:
        void nhap();
        void xuat();
};
void Hang::nhap()
{
    cout<<"\nNhap ma hang: ";
    fflush(stdin);gets(maHang);
    cout<<"\nNhap ten hang: ";
    fflush(stdin);gets(tenHang);
    cout<<"\nNhap don gia: ";
    cin>>donGia;
    cout<<"\nNhap so luong: ";
    cin>>soLuong;
}
void Hang::xuat()
{
    cout<<"\nMa hang: "<<maHang;
    cout<<"\nTen hang: "<<tenHang;
    cout<<"\nDon gia: "<<donGia;
    cout<<"\nSo luong: "<<soLuong;
    cout<<"\nThanh ten: "<<soLuong*donGia;
}
int main()
{
    Hang *a;
    int n;
    cout<<"Nhap vao so hang muon mua: ";
    cin>>n;
    a = new Hang [n];
    for (int i = 0; i < n; i++)
    {
        a[i].nhap();
        a[i].xuat();
    }
    delete []a;
    return 0;
    
}
