#include<bits/stdc++.h>
using namespace std;

class NCC
{
        char maNCC[30];
        char tenNCC[30];
        char diaChi[30];
    public:
        void nhap();
        void xuat();
};
void NCC::nhap()
{
    cout<<"\nNhap ma NCC: "; fflush(stdin); gets(maNCC);
    cout<<"\nNhap ten NCC: "; fflush(stdin); gets(tenNCC);
    cout<<"\nNhap dia chi NCC: "; fflush(stdin); gets(diaChi);
}
void NCC::xuat()
{
    cout<<setw(10)<<left<<"Ma NCC: "<<maNCC<<setw(30)<<left<<"Ten NCC: "<<tenNCC<<endl;
    cout<<setw(10)<<left<<"Dia chi: "<<diaChi<<endl;
}
class Hang
{
        char tenHang[30];
        float donGia;
        int soLuong;
    public:
        void nhap();
        void xuat();
        float thanhTien();
};
void Hang::nhap()
{
    cout<<"\nNhap ten hang: "; fflush(stdin); gets(tenHang);
    cout<<"\nNhap don gia: "; cin>>donGia;
    cout<<"\nNhap so luong: "; cin>>soLuong;
}
void Hang::xuat()
{
    cout<<tenHang<<setw(20)<<left<<donGia<<setw(20)<<left<<soLuong<<setw(20)<<left<<thanhTien()<<endl;
}
float Hang::thanhTien()
{
    return donGia*soLuong;
}
class Phieu
{
        char maPhieu[30];
        char ngayLap[30];
        NCC x;
        Hang *y;
        int n;
    public:
        void nhap();
        void xuat();
};
void Phieu::nhap()
{
    cout<<"\nNhap ma phieu: "; fflush(stdin); gets(maPhieu);
    cout<<"\nNhap ngay lap: "; fflush(stdin); gets(ngayLap);
    x.nhap();
    cout<<"\nNhap so luong hang: "; cin>>n;
    y = new Hang[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Hang thu "<<i+1<<endl;
        y[i].nhap();
    }    
}
void Phieu::xuat()
{
    cout<<"==============================PHIEU NHAP HANG==========================="<<endl;
    cout<<setw(10)<<left<<"Ma phieu: "<<maPhieu<<setw(30)<<left<<"Ngay lap: "<<ngayLap<<endl;
    x.xuat();
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"Ten hang"<<setw(20)<<left<<"Don gia"<<setw(20)<<left<<"So luong"<<setw(20)<<left<<"Thanh tien"<<endl;
    for (int i = 0; i < n; i++)
    {
        y[i].xuat();
    }
    float tong=0;
    for (int i = 0; i < n; i++)
    {
        tong = tong + y[i].thanhTien();
    }
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<setw(60)<<left<<"Cong thanh tien: "<<tong<<endl;
}
int main()
{
    Phieu a;
    a.nhap();
    a.xuat();
    return 0;
}