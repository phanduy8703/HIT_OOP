#include<bits/stdc++.h>

using namespace std;

class HinhBinhHanh
{
    private:
        double a;
        double b;
        double h;
    public:
        double chuVi();
        double dienTich();
        void xuat();
        HinhBinhHanh(double a, double b, double h);

};

double HinhBinhHanh::chuVi()
{
    return (a+b)*2;

}

double HinhBinhHanh::dienTich()
{
    return a*h;

}

void HinhBinhHanh::xuat()
{
    cout<<"Do dai day: "<<a<<"\nDo dai ben: "<<b<<"\nChieu cao: "<<h<<"\nChu vi: "<<chuVi()<<"\nDien tich: "<<dienTich()<<endl;

}

HinhBinhHanh::HinhBinhHanh(double a, double b, double h)
{
    this -> a = a;
    this -> b = b;
    this -> h = h;

}

int main()
{
    HinhBinhHanh a(8, 7, 3), b(9, 7, 3);
    cout<<"Hinh 1!"<<endl;
    a.xuat();
    cout<<"Hinh 2!"<<endl;
    b.xuat();
    if (a.dienTich()>b.dienTich())
    {
        cout<<"Hinh 1 co dien tich lon hon!";

    }
    else if (a.dienTich()==b.dienTich())
    {
        cout<<"Hai hinh co dien tich bang nhau!";

    }
    else cout<<"Hinh 2 co dien tich lon hon!";
    
    return 0;

}