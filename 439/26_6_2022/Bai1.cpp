#include<bits/stdc++.h>
using namespace std;
#define e 2.72
void Nhap(int &n, int &m)
{
    cout<<"Nhap vao so nguyen N = ";
    cin>>n;
    cout<<"Nhap vao so nguyen M = ";
    cin>>m;
    if (n>m)
    {
        swap(n,m);
    }
}
int Tinh(int n, int m)
{
    int tong=0;
    for (int i = n; i <= m; i++)
    {
        if (i%3==0&&i%5==0)
        {
            tong+=i;
        }
        
    }
    return tong;    
}
float Fx(int n, float x)
{
    float fx=0;
    if (x==0)
    {
      fx=1;
    }
    else

    fx=2020*e*fabs(x);
    for (int i = 1; i <= n; i++)
    {
        fx=fx+(n/pow(x,i));
    }
    return fx;    
}
int main()
{
    int n,m;
    float x;
    Nhap(n,m);
    cout<<Tinh(n,m)<<endl;
    cout<<Tinh(1,n)<<endl;
    cout<<"\nNhap vao gia tri cua X = ";
    cin>>x;
    cout<<"T = "<<Fx(m,x)-Fx(n,x);
    return 0;
}
