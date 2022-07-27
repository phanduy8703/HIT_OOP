#include<bits/stdc++.h>
using namespace std;
struct toado
{
    int x;
    int y;
};

void Nhap(toado &a)
{
    cout<<"Nhap vao x = ";
    cin>>a.x;
    cout<<"Nhap vao y = ";
    cin>>a.y;
}
float Tinh(toado a,toado b)
{
    float d;
    d=sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
    return d;
}
int main()
{
    toado a,b,c;
    cout<<"Toa do A:"<<endl;
    Nhap(a);
    cout<<"Toa do B:"<<endl;
    Nhap(b);
    cout<<"Toa do C:"<<endl;
    Nhap(c);
    cout<<"Chu vi cua tam giac la C = "<<Tinh(a,b)+Tinh(b,c)+Tinh(c,a);
    return 0;
}