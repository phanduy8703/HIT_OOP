#include<bits/stdc++.h>

using namespace std;

class Phieu;

class NguoiDiCho
{
    private:
        char hoVaTen[30];
        char soDT[15];
        char diaChi[30];
    public:
        void nhap();
        void xuat();

};

class Hang
{
    private:
        char tenHang[30];
        double donGia;
        int soLuong;
    public:
        void nhap();
        void xuat();
        double thanhTien();
        friend class Phieu;
        friend void sapXep(Phieu a);
        friend void kiemTraRau(Phieu a);
        friend void xoa(Phieu &a);

};

class Phieu
{
    private:
        char maPhieu[30];
        char ngay[30];
        NguoiDiCho x;
        Hang *y;
        int n;
    public:
        void nhap();
        void xuat();
        double congThanhTien();
        friend void sapXep(Phieu a);
        friend void kiemTraRau(Phieu a);
        friend void xoa(Phieu &a);

};

void NguoiDiCho::nhap()
{
    cout<<"\nNhap ten nguoi di cho: "; fflush(stdin); gets(hoVaTen);
    cout<<"\nNhap so dien thoai: "; fflush(stdin); gets(soDT);
    cout<<"\nNhap dia chi: "; fflush(stdin); gets(diaChi);

}

void NguoiDiCho::xuat()
{
    cout<<"Ho va ten nguoi di cho:    "<<hoVaTen<<endl;
    cout<<"So dien thoai:   "<<soDT<<endl;
    cout<<"Dia chi:   "<<diaChi<<endl;

}

void Hang::nhap()
{
    cout<<"\nNhap ten hang: "; fflush(stdin); gets(tenHang);
    cout<<"\nNhap don gia: "; cin>>donGia;
    cout<<"\nNhap so luong: "; cin>>soLuong; 

}

void Hang::xuat()
{
    cout<<setw(15)<<left<<tenHang<<setw(15)<<donGia<<setw(15)<<soLuong<<thanhTien()<<endl;

}

double Hang::thanhTien()
{
    return donGia*soLuong;

}

void Phieu::nhap()
{
    cout<<"\nNhap ma phieu: "; fflush(stdin); gets(maPhieu);
    cout<<"\nNhap ngay: "; fflush(stdin); gets(ngay);
    x.nhap();
    cout<<"\nNhap so luong hang: "; cin>>n;
    y = new Hang [n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Hang "<<i+1<<endl;
        y[i].nhap();

    }
    
}

void Phieu::xuat()
{
    cout<<"==========================PHIEU DI CHO=========================="<<endl;
    cout<<setw(15)<<left<<"Ma phieu:"<<maPhieu<<"\t\t\t\tNgay: "<<ngay<<endl;
    x.xuat();
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<setw(15)<<left<<"Ten Hang"<<setw(15)<<"Don Gia"<<setw(15)<<"So Luong"<<"Thanh Tien"<<endl;
    for (int i = 0; i < n; i++)
    {
        y[i].xuat();

    }
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\tCong thanh tien: "<<congThanhTien()<<endl;

}

double Phieu::congThanhTien()
{
    double tong;
    for (int i = 0; i < n; i++)
    {
        tong += y[i].thanhTien();

    }
    return tong;

}

void sapXep(Phieu a)
{
    for (int i = 0; i < a.n; i++)
    {
        for (int j = i; j < a.n; j++)
        {
            if (a.y[i].thanhTien()>a.y[j].thanhTien())
            {
                swap(a.y[i],a.y[j]);

            } 

        }  

    } 

}

void kiemTraRau(Phieu a)
{
    int dem=0;
    for (int i = 0; i < a.n; i++)
    {
        if (strcmp(a.y[i].tenHang, "Rau")==0)
        {
            cout<<"Co rau!"<<endl;
            cout<<setw(15)<<left<<"Ten Hang"<<setw(15)<<"Don Gia"<<setw(15)<<"So Luong"<<"Thanh Tien"<<endl;
            a.y[i].xuat();
            dem++;

        }

    }
    if(dem==0)
    {
        cout<<"Khong co rau!"<<endl;

    }  

}

void xoa(Phieu &a)
{
    for(int i = 0; i < a.n; )
    {
        if(a.y[i].soLuong<5)
        {
            for(int j=i; j<a.n-1; j++)
            {
                a.y[j]=a.y[j+1];

            }
            a.n--;

        }
        else
        i++;

    }

}

int main()
{
    Phieu a;
    a.nhap();
    a.xuat();
    cout<<"Sap xep tang dan!"<<endl;
    sapXep(a);
    a.xuat();
    cout<<"Kiem tra rau!"<<endl;
    kiemTraRau(a);
    cout<<"Xoa nhung san pham co so luong nho hon 5!"<<endl;
    xoa(a);
    a.xuat();
    return 0;
    
}