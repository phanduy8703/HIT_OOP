#include<bits/stdc++.h>

using namespace std;

class Phieu;

class NCC
{
    private:
        char maNCC[30];
        char tenNCC[30];
        char diaChi[30];
        char soDT[15];
    public:
        void nhap();
        void xuat();

};

class SanPham
{
    private:
        char maSP[30];
        char tenSP[30];
        int soLuong;
        double donGia;
    public:
        void nhap();
        void xuat();
        double thanhTien();
        friend class Phieu;
        friend void sapXep(Phieu a);
        friend void chen(Phieu &a, SanPham x);
        friend void xoa(Phieu &a, int pos);
        friend void doiSoLuong(Phieu a);

};

class Phieu
{
    private:
        char maPhieu[30];
        char ngayLap[30];
        NCC x;
        SanPham *y;
        int n;
    public:
        void nhap();
        void xuat();
        friend void sapXep(Phieu a);
        friend void chen(Phieu &a, SanPham x);
        friend void xoa(Phieu &a, int pos);
        friend void doiSoLuong(Phieu a);

};

void NCC::nhap()
{
    cout<<"\nNhap ma NCC: "; fflush(stdin); gets(maNCC);
    cout<<"\nNhap ten NCC: "; fflush(stdin); gets(tenNCC);
    cout<<"\nNhap dia chi NCC: "; fflush(stdin); gets(diaChi);
    cout<<"\nNhap SDT: "; fflush(stdin); gets(soDT);

}

void NCC::xuat()
{
    cout<<setw(20)<<left<<"Ma Nha Cung Cap: "<<setw(20)<<maNCC<<"Ten Nha Cung Cap: "<<setw(20)<<left<<tenNCC<<endl;
    cout<<setw(20)<<left<<"Dia Chi: "<<setw(20)<<diaChi<<"SDT: "<<setw(20)<<left<<soDT<<endl;

}

void SanPham::nhap()
{
    cout<<"\nNhap ma san pham: "; fflush(stdin); gets(maSP);
    cout<<"\nNhap ten san pham: "; fflush(stdin); gets(tenSP);
    cout<<"\nNhap so luong: "; cin>>soLuong;
    cout<<"\nNhap don gia: "; cin>>donGia;

}

double SanPham::thanhTien()
{
    return soLuong*donGia;

}

void SanPham::xuat()
{
    cout<<setw(15)<<left<<maSP<<setw(15)<<tenSP<<setw(15)<<soLuong<<setw(15)<<donGia<<thanhTien()<<endl;

}

void Phieu::nhap()
{
    cout<<"\nNhap ma phieu: "; fflush(stdin); gets(maPhieu);
    cout<<"\nNhap ngay lap: "; fflush(stdin); gets(ngayLap);
    x.nhap();
    cout<<"\nNhap so luong san pham "; cin>>n;
    y = new SanPham[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"San Pham "<<i+1<<endl;
        y[i].nhap();

    }

}

void Phieu::xuat()
{
    cout<<"Dai hoc Victory"<<endl;
    cout<<"==========================PHIEU NHAP VAN PHONG PHAM======================="<<endl;
    cout<<setw(20)<<left<<"Ma phieu: "<<setw(20)<<maPhieu<<"Ngay lap: "<<setw(20)<<ngayLap<<endl;
    x.xuat();
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<setw(15)<<left<<"Ma San Pham"<<setw(15)<<"Ten San Pham"<<setw(15)<<"So Luong"<<setw(15)<<"Don Gia"<<"Thanh Tien"<<endl;
    for (int i = 0; i < n; i++)
    {
        y[i].xuat();

    }
    double tong=0;
    for (int i = 0; i < n; i++)
    {
        tong += y[i].thanhTien();

    }
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tTONG"<<"\t\t\t\t"<<tong<<endl;

}

//Sắp xếp danh sách sản phẩm giảm dần theo thành tiền. 
void sapXep(Phieu a)
{
    for (int i = 0; i < a.n; i++)
    {
        for (int j = i; j < a.n; j++)
        {
            if (a.y[i].thanhTien()<a.y[j].thanhTien())
            {
                swap(a.y[i],a.y[j]);

            } 

        } 

    }  

}

//Nhập một sản phẩm bất kì và chèn vào vị trí đầu tiên trong danh sách sản phẩm.
void chen(Phieu &a, SanPham x)
{
    a.y = (SanPham*)realloc(a.y, (a.n+1)*sizeof(SanPham));
    for (int i = a.n; i >= 0; i--)
    {
        a.y[i]=a.y[i-1];

    }
    a.y[0]=x;
    a.n++;  

}

//Xóa 1 sản phẩm tại vị trí bất kỳ(0 < pos <= n).
void xoa(Phieu &a, int pos)
{
    for (int i = pos -1 ; i < a.n-1; i++)
    {
        a.y[i]=a.y[i+1];
    }
    a.y = (SanPham*)realloc(a.y, (a.n-1)*sizeof(SanPham));
    a.n--;       

}

//Thay đổi những sản phẩm nào có số lượng < 10 thành 10.
void doiSoLuong(Phieu a)
{
    for (int i = 0; i < a.n; i++)
    {
        if (a.y[i].soLuong<10)
        {
            a.y[i].soLuong = 10;
        } 

    }

}

int main()
{
    Phieu a;
    a.nhap();
    a.xuat();
    sapXep(a);
    cout<<"2."<<endl;
    a.xuat();
    cout<<"3."<<endl;
    SanPham x;
    x.nhap();
    chen(a,x);
    a.xuat();
    cout<<"4."<<endl;
    int y;
    cout<<"Nhap vao vi tri muon xoa: "; cin>>y;
    xoa(a,y);
    a.xuat();
    cout<<"5."<<endl;
    doiSoLuong(a);
    a.xuat();
    return 0;

}