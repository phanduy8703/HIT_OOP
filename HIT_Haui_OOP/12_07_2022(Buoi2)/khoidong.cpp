#include<bits/stdc++.h>
using namespace std;

class hinhChuNhat
{
    private:
        float chieuDai;
        float chieuRong;
    public:
        void nhap();
        void xuat();
        float chuVi();
        float dienTich();
};
void hinhChuNhat::nhap()
{
    cout<<"\nNhap chieu dai: ";
    cin>>chieuDai;
    cout<<"\nNhap chieu rong: ";
    cin>>chieuRong;
}
void hinhChuNhat::xuat()
{
    cout<<"\nChieu dai = "<<chieuDai;
    cout<<"\nChieu rong = "<<chieuRong;
}

int main()
{
    hinhChuNhat *a;
    int n;
    cout<<"Nhap so hinh chu nhat: ";
    cin>>n;
    a = new hinhChuNhat [n];
    for (int i = 0; i <n; i++)
    {
        a[i].nhap();
        a[i].xuat();
    }
    delete []a;   
    return 0;
}
