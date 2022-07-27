#include<bits/stdc++.h>
using namespace std;
void Tang(unsigned int &n)
{
    n+=3;
}
void Nhap(float &x, unsigned int &n)
{
    cout<<"\nNhap so thuc X = ";
    cin>>x;
    cout<<"\nNhap so nguyen duong N = ";
    cin>>n;

}
float TimS(float x, unsigned int n)
{
    float s=0; 
    if (n>2)
    {
        s=sqrt(2019);
        for (unsigned int i = 1; i <= n; i++)
        {
            s=s+pow(x+1,i);
        }
    
    }
    else
    s=fabs(n*x);
    return s;
}
float TimP(float x, unsigned int n)
{
    float p=2020*exp(fabs(x))+1;
    for (unsigned int i = 1; i <=n; i++)
    {
        p=p+3*i;
    }
    return p;
}
void Tinh(float x, unsigned int n)
{
    cout<<"\nKet qua cua bieu thuc S(x,n)/P(n) = "<<TimS(x,n)/TimP(x,n);
}
int main()
{
    float x;
    unsigned int n;
    Nhap(x,n);
    Tang(n);
    Tinh(x,n);
    return 0;
}

