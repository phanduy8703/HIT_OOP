#include<bits/stdc++.h>

using namespace std;

class Nguoi
{
    protected:
        char hoTen[30];
        int tuoi;
    public:
        void nhap();
        void xuat();
};

void Nguoi::nhap()
{
    cout<<"\nNhap ho ten: "; fflush(stdin); gets(hoTen);
    cout<<"\nNhap tuoi: "; cin>>tuoi;
}

void Nguoi::xuat()
{
    cout<<"\nHo ten: "<<hoTen;
    cout<<"\nTuoi: "<<tuoi;
}

class BenhVien
{
    private:
        char tenBenhVien[30];
        char diaChi[30];
        Nguoi giamDoc;
    public:
        friend class BenhNhan;
};

class BenhNhan : public Nguoi
{
    private:
        char ma[10];
        char tienSu[30];
        char chanDoan[30];
        BenhVien x;
    public:
        void nhap();
        void xuat();
        friend void kiemTra(BenhNhan *a, int n);
        friend void sua(BenhNhan *a, int n);
};

void BenhNhan::nhap()
{
    cout<<"\nNhap ten benh vien: "; fflush(stdin); gets(x.tenBenhVien);
    cout<<"\nNhap dia chi: "; fflush(stdin); gets(x.diaChi);
    cout<<"\nNhap thong tin giam doc benh vien!";
    x.giamDoc.nhap();
    cout<<"\nNhap thong tin benh nhan!";
    cout<<"\nNhap ten benh nhan: "; fflush(stdin); gets(hoTen);
    cout<<"\nNhap tuoi benh nhan: "; cin>>tuoi;    
    cout<<"\nNhap ma benh nhan: "; fflush(stdin); gets(ma);
    cout<<"\nNhap tien su: "; fflush(stdin); gets(tienSu);
    cout<<"\nNhap chan doan: "; fflush(stdin); gets(chanDoan);
}

void BenhNhan::xuat()
{
    cout<<"\nTen benh vien: "<<x.tenBenhVien;
    cout<<"\nDia chi: "<<x.diaChi;
    cout<<"\nGiam doc!";
    x.giamDoc.xuat();
    cout<<"\nBenh nhan!";
    cout<<"\nHo ten: "<<hoTen;
    cout<<"\nTuoi: "<<tuoi;
    cout<<"\nMa benh nhan: "<<ma;
    cout<<"\nTien su: "<<tienSu;
    cout<<"\nChan doan: "<<chanDoan;
}

void kiemTra(BenhNhan *a, int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].tuoi>30)
        {
            dem++;

        }

    }
    cout<<"\nCo "<<dem<<" benh nhan tren 30 tuoi!";
}

void sua(BenhNhan *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].ma, "BN01")==0)
        {
            a[i].tuoi = 20;

        }

        
    }
    
}

int main()
{
    BenhNhan *a;
    int n;
    cout<<"Nhap so luong benh nhan: ";
    cin>>n;
    a = new BenhNhan[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"\n======================Benh nhan "<<i+1<<"==========================";
        a[i].nhap();

    }
    for (int i = 0; i < n; i++)
    {
        cout<<"\n======================Benh nhan "<<i+1<<"==========================";
        a[i].xuat();

    }
    kiemTra(a,n);
    sua(a,n);
    cout<<"\nSau khi sua!";
    for (int i = 0; i < n; i++)
    {
        cout<<"\n======================Benh nhan "<<i+1<<"==========================";
        a[i].xuat();
        
    }
    return 0;
}