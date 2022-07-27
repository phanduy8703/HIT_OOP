#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    //ax^2+bx+c=0
    float a, b, c, denta, x, x1, x2;
    cout<<"Nhap gia tri a "; cin>>a;
    cout<<"Nhap gia tri b "; cin>>b;
    cout<<"Nhap gia tri c "; cin>>c;
    denta=pow(b,2)-4*a*c;
    if (denta<0)
    {
        cout<<"phuong trinh vo nghiem ";
    }
    else
    if (denta==0)
    {
        cout<<"phuong trinh co nghiem kep "<<float(-b/(2*a));
    }
        else
    {
        x1=(-b+sqrt(denta))/(2*a);
        x2=(-b-sqrt(denta))/(2*a); 
        cout<<"nghiem cua phuong trinh bac 2 la: "<<endl;
        cout<<x1<<" "<<x2;
    }
    return 0;
}