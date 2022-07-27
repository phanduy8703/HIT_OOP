#include<bits/stdc++.h>

using namespace std;
class Phieu;
class Phong
{
    private:
        char tenPhong[30];
        char maPhong[30];
        char truongPhong[30];
    public:
        void nhap();
        void xuat();
};
void Phong::nhap()
{
    cout<<"\nNhap ten phong: "; fflush(stdin); gets(tenPhong);
    cout<<"\nNhap ma phong: "; fflush(stdin); gets(maPhong);
    cout<<"\nNhap ten truong phong: "; fflush(stdin); gets(truongPhong);
}
void Phong::xuat()
{
    cout<<"Kiem ke tai phong: "<<setw(20)<<left<<tenPhong<<"Ma phong: "<<maPhong<<endl;
    cout<<"Truong phong: "<<truongPhong<<endl;
}
class NhanVien
{
    private:
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
    cout<<"Nhan vien kiem ke: "<<setw(20)<<left<<tenNV<<"Chuc vu: "<<chucVu<<endl;
}
class TaiSan
{
    private:
        char tenTaiSan[30];
        int soLuong;
        char tinhTrang[30];
    public:
        void nhap();
        void xuat();
        friend class Phieu;
        friend void DoiSoLuong( Phieu &a);        
        friend void Chen(Phieu &a,TaiSan x, int pos);
};
void TaiSan::nhap()
{
    cout<<"\nNhap ten tai san: "; fflush(stdin); gets(tenTaiSan);
    cout<<"\nNhap so luong: "; cin>>soLuong;
    cout<<"\nNhap tinh trang: "; fflush(stdin); gets(tinhTrang);
}
void TaiSan::xuat()
{
    cout<<tenTaiSan<<setw(30)<<soLuong<<setw(30)<<tinhTrang<<endl;
}
class Phieu
{
    private:
        char maPhieu[30];
        char ngayKiemKe[30];
        NhanVien x;
        Phong y;
        TaiSan *z;
        int n;
    public:
        void nhap();
        void xuat();
        friend void DoiSoLuong( Phieu &a);
        friend void Chen(Phieu &a,TaiSan x, int pos);
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
    cout<<"Ma phieu: "<<setw(20)<<left<<maPhieu<<"Ngay kiem ke: "<<ngayKiemKe<<endl;
    x.xuat();
    y.xuat();
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<setw(20)<<left<<"Ten tai san"<<setw(30)<<"So luong"<<setw(30)<<"Tinh trang"<<endl;
    for (int i = 0; i < n; i++)
    {
        z[i].xuat();
    }
    int tong=0;
    for (int i = 0; i < n; i++)
    {
        tong += z[i].soLuong;
    }
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"So tai san da kiem ke: "<<n<<"\t\tTong so luong: "<<tong<<endl;
}
void DoiSoLuong(Phieu &a)
{
    for (int i = 0; i < a.n; i++)
    {
        if (strcmp(a.z[i].tenTaiSan, "May vi tinh")==0)
        {
            a.z[i].soLuong = 20;
        }
        
    }
    
}
void Chen(Phieu &a, TaiSan x, int pos)
{
    a.z = (TaiSan*)realloc(a.z, (a.n+1)*sizeof(TaiSan));
    for (int i = a.n; i >= pos; i--)
    {
        a.z[i]=a.z[i-1];
    }
    a.z[pos-1]=x;
    a.n++;
    
}
int main()
{
    Phieu a;
    a.nhap();
    a.xuat();
    DoiSoLuong(a);
    a.xuat();
    TaiSan x;
    x.nhap();
    int cc;
    cin>>cc;
    Chen(a,x,cc);
    a.xuat();
    return 0;
}