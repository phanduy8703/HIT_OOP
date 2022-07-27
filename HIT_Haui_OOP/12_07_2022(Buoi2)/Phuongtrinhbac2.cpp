#include<bits/stdc++.h>
using namespace std;

class ptb2
{
    private:
        float a;
        float b;
        float c;
    public:
        void nhap();
        void xuat();
        void giai();
};
void ptb2::nhap()
{
    cout<<"Nhap vao phuong trinh bac 2: ";
    cout<<"\nNhap a = ";
    cin>>a;
    cout<<"\nNhap b = ";
    cin>>b;
    cout<<"\nNhap c = ";
    cin>>c;
}
void ptb2::xuat()
{
    cout<<"Phuong trinh bac 2 vua nhap la: ";
    cout<<a<<"x"<<char(253);
    if (b>0)
    {
        cout<<"+"<<b<<"x";
    }
    else
    {
        cout<<b<<"x";
    }
    if (c>0)
    {
        cout<<"+"<<c;
    }
    else
    {
        cout<<c;
    }
    cout<<"=0";
}
void ptb2::giai()
{
    if (a==0)
    {
        cout<<"\nDay la phuong trinh bac nhat!";
        if (b==0)
        {
            cout<<"\nPhuong trinh vo nghiem!";
        }
        else cout<<"\nPhuong trinh co nghiem la: x = "<<-c/b;
    }
    else
    {
        float delta;
        delta= pow(b,2)-4*a*c;
        if (delta==0)
        {
            cout<<"\nPhuong trinh co mot nghiem kep: x = "<<-b/2*a;
        }
        else
        {
            if (delta<0)
            {
                cout<<"\nPhuong trinh vo nghiem!";
            }
            else
            {
                cout<<"\nPhuong trinh co 2 nghiem phan biet: x1 = "<<(-b+sqrt(delta))/2*a<<" x2 = "<<(-b-sqrt(delta))/2*a;
            }   
        
        }
    }
}
int main()
{
    ptb2 a;
    a.nhap();
    a.xuat();
    a.giai();
    return 0;
}