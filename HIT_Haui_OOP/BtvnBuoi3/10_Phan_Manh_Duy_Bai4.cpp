#include<bits/stdc++.h>
using namespace std;

class NhanVien
{
        char tenNV[30];
        char chucVu[30];
    public:
        void nhap();
        void xuat();
};
void NhanVien::nhap()
{
    cout<<"\nNhap nhan vien kiem ke: "; fflush(stdin); gets(tenNV);
    cout<<"\nNhap chuc vu: "; fflush(stdin); gets(chucVu);
}
void NhanVien::xuat()
{
    cout<<setw(10)<<left<<"Nhan vien kiem ke: "<<tenNV<<setw(20)<<left<<"Chuc vu: "<<chucVu<<endl;
}
class Phong
{
        char tenPhong[30];
        char maPhong[30];
        char truongPhong[30];
    public:
        void nhap();
        void xuat();
};
void Phong::nhap()
{
    cout<<"\nNhap phong kiem ke: "; fflush(stdin); gets(tenPhong);
    cout<<"\nNhap ma phong: "; fflush(stdin); gets(maPhong);
    cout<<"\nNhap ten truong phong: "; fflush(stdin); gets(truongPhong);
}
void Phong::xuat()
{
    cout<<setw(10)<<left<<"Kiem ke tai phong: "<<tenPhong<<setw(20)<<left<<"Ma phong: "<<maPhong<<endl;
    cout<<setw(10)<<left<<"Truong phong: "<<truongPhong<<endl;
}
class TaiSan
{
        char tenTS[30];
        int soLuong;
        char tinhTrang[30];
    public:
        void nhap();
        void xuat();
        friend class Phieu;
};
void TaiSan::nhap()
{
    cout<<"\nNhap ten tai san: "; fflush(stdin); gets(tenTS);
    cout<<"\nNhap so luong: "; cin>>soLuong;
    cout<<"\nNhap tinh trang: "; fflush(stdin); gets(tinhTrang);
}
void TaiSan::xuat()
{
    cout<<setw(15)<<left<<tenTS<<setw(25)<<left<<soLuong<<setw(25)<<left<<tinhTrang<<endl;
}
class Phieu
{
        char maPhieu[30];
        char ngayKiemKe[30];
        NhanVien x;
        Phong y;
        TaiSan *z;
        int n;
    public:
        void nhap();
        void xuat();
};
void Phieu::nhap()
{
    cout<<"\nNhap ma phieu: "; fflush(stdin); gets(maPhieu);
    cout<<"\nNhap ngay kiem ke: "; fflush(stdin); gets(ngayKiemKe);
    x.nhap();
    y.nhap();
    cout<<"\nNhap so luong tai san: ";
    cin>>n;
    z = new TaiSan[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Tai san thu "<<i+1<<endl;
        z[i].nhap();
    }
}
void Phieu::xuat()
{
    cout<<"===========================PHIEU KIEM KE TAI SAN========================="<<endl;
    cout<<setw(10)<<left<<"Ma phieu: "<<maPhieu<<setw(20)<<left<<"Ngay kiem ke: "<<ngayKiemKe<<endl;
    x.xuat();
    y.xuat();
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<setw(15)<<left<<"Ten tai san"<<setw(25)<<left<<"So luong"<<setw(25)<<left<<"Tinh trang"<<endl;
    for (int i = 0; i < n; i++)
    {
        z[i].xuat();
    }  
    int tong=0;
    for (int i = 0; i < n; i++)
    {
        tong=tong + z[i].soLuong;
    }
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<setw(15)<<left<<"So tai san da kiem ke: "<<n<<setw(35)<<left<<"Tong so luong: "<<tong<<endl;
}
int main()
{
    Phieu a;
    a.nhap();
    a.xuat();
    return 0;
}