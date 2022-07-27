#include<bits/stdc++.h>
using namespace std;
#define e 2,71
void Nhap1(float &x)
{
    cout<<"Nhap vao so thuc X = ";
    cin>>x;

}
void Nhap2(int &n)
{
    do
    {
        cout<<"Nhap vao so nguyen duong N = ";
        cin>>n;
    } while (n<=0);
}
float TinhF(float x, int n)
{
    float f=2020*pow(x,n+1);
    for (int i = 1; i <= n; i++)
    {
        f=f+(pow(x,i+1)/i*n);
    }
    return f;
}
float TinhP(float x, int n)
{
    float p=0;
    for (int i = 1; i <= n; i++)
    {
        p=p+(e*x*i);
    }
    return p;
}
int main()
{
    float x;
    int k;
    Nhap1(x);
    Nhap2(k);
    cout<<"Dit me may dap an la "<<(TinhF(x,k)/TinhP(x,2*k));
    return 0;
}