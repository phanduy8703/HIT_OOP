#include<bits/stdc++.h>

using namespace std;

class Truong
{
    protected:
        char maTruong[30];
        char tenTruong[30];
        char diaChi[30];
    public:
        void nhap();
        void xuat();
};

void Truong::nhap()
{
    cout<<"\nNhap ma truong: "; fflush(stdin); gets(maTruong);
    cout<<"\nNhap ten truong: "; fflush(stdin); gets(tenTruong);
    cout<<"\nNhap dia chi: "; fflush(stdin); gets(diaChi);
}

void Truong::xuat()
{
    cout<<"\nMa truong: "<<maTruong;
    cout<<"\nTen truong: "<<tenTruong;
    cout<<"\nDia chi: "<<diaChi;
}

class Khoa
{
    private:
        char maKhoa[30];
        char tenKhoa[30];
        char truongKhoa[30];
    public:
        friend class TruongDH;    
};

class Ban
{
    private:
        char maBan[30];
        char tenBan[30];
        char ngayThanhLap[30];
    public:
        friend class TruongDH;
};

class TruongDH : public Truong
{
    private:
        int n;
        Khoa *x;
        int m;
        Ban *y;
    public:
        void nhap();
        void xuat();
};

void TruongDH::nhap()
{
    Truong::nhap();
    cout<<"\nNhap so khoa: ";
    cin>>n;
    x = new Khoa[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"\nNhap ma khoa: "; fflush(stdin); gets(x[i].maKhoa);
        cout<<"\nNhap ten khoa: "; fflush(stdin); gets(x[i].tenKhoa);
        cout<<"\nNhap truong khoa: "; fflush(stdin); gets(x[i].truongKhoa);

    }
    cout<<"\nNhap so ban: ";
    cin>>m;
    y = new Ban[m];
    for (int i = 0; i < m; i++)
    {
        cout<<"\nNhap ma ban: "; fflush(stdin); gets(y[i].maBan);
        cout<<"\nNhap ten ban: "; fflush(stdin); gets(y[i].tenBan);
        cout<<"\nNhap ngay thanh lap: "; fflush(stdin); gets(y[i].ngayThanhLap);

    }
}

void TruongDH::xuat()
{
    Truong::xuat();
    cout<<"\n---------------DANH SACH KHOA----------------"<<endl;
    cout<<setw(15)<<left<<"Ma Khoa"<<setw(15)<<"Ten Khoa"<<"Truong Khoa"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<setw(15)<<left<<x[i].maKhoa<<setw(15)<<x[i].tenKhoa<<x[i].truongKhoa<<endl;

    }
    cout<<"----------------DANH SACH BAN----------------"<<endl;
    cout<<setw(15)<<left<<"Ma Ban"<<setw(15)<<"Ten Ban"<<"Ngay Thanh Lap"<<endl;
    for (int i = 0; i < m; i++)
    {
        cout<<setw(15)<<left<<y[i].maBan<<setw(15)<<y[i].tenBan<<y[i].ngayThanhLap<<endl;
        
    }
}

int main()
{
    TruongDH a;
    a.nhap();
    a.xuat();
    return 0;
}