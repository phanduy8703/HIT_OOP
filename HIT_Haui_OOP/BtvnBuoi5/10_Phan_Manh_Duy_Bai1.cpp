#include<bits/stdc++.h>

using namespace std;

class PRINTER
{
    protected:
        double trongLuong;
        char hangSX[30];
        int nam;
        int tocDo;

};

class DOTPRINTER : public PRINTER
{
    private:
        int matDoKim;
    public:
        void nhap();
        void xuat();

};

class LASERPRINTER : public PRINTER
{
    private:
        int doPhanGiai;
    public:
        void nhap();
        void xuat();

};

void DOTPRINTER::nhap()
{
    cout<<"\nNhap trong luong: "; cin>>trongLuong;
    cout<<"\nNhap hang san xuat: "; fflush(stdin); gets(hangSX);
    cout<<"\nNhap nam san xuat: " ; cin>>nam;
    cout<<"\nNhap toc do kim: "; cin>>tocDo;
    cout<<"\nNhap mat do kim: "; cin>>matDoKim;

}

void DOTPRINTER::xuat()
{
    cout<<"Trong luong: "<<trongLuong<<endl;
    cout<<"Hang san xuat: "<<hangSX<<endl;
    cout<<"Nam san xuat: "<<nam<<endl;
    cout<<"Toc do kim: "<<tocDo<<endl;
    cout<<"Mat do kim: "<<matDoKim<<endl;

}

void LASERPRINTER::nhap()
{
    cout<<"\nNhap trong luong: "; cin>>trongLuong;
    cout<<"\nNhap hang san xuat: "; fflush(stdin); gets(hangSX);
    cout<<"\nNhap nam san xuat: " ; cin>>nam;
    cout<<"\nNhap toc do: "; cin>>tocDo;
    cout<<"\nNhap do phan giai: "; cin>>doPhanGiai;

}

void LASERPRINTER::xuat()
{
    cout<<"Trong luong: "<<trongLuong<<endl;
    cout<<"Hang san xuat: "<<hangSX<<endl;
    cout<<"Nam san xuat: "<<nam<<endl;
    cout<<"Toc do: "<<tocDo<<endl;
    cout<<"Do phan giai: "<<doPhanGiai<<endl;
    
}

int main()
{
    DOTPRINTER a;
    LASERPRINTER *b;
    cout<<"\nNhap thong tin may in Kim!"<<endl;
    a.nhap();
    cout<<"\nNhap thong tin may in Laser!"<<endl;
    int n;
    cout<<"\nNhap so may in Laser: "; cin>>n;
    b = new LASERPRINTER[n];
    for(int i = 0; i < n ; i++)
    {
        cout<<"Nhap may in laser thu "<<i+1<<endl;
        b[i].nhap();

    }
    cout<<"Thong tin may in!"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"May in Kim!"<<endl;
    a.xuat();
    cout<<"May in Laser!"<<endl;
    for(int i = 0; i < n ; i++)
    {
        cout<<"-----------------------"<<endl;
        cout<<"May in laser thu "<<i+1<<endl;
        b[i].xuat();

    }
    return 0;

}