//Nh?p xu?t s? chính phuong s? nguyên t? chèn scp nh? nh?t vào v? trí snt cu?i 
#include<bits/stdc++.h>
using namespace std;
void Nhap(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap phan tu p["<<i<<"] = ";
        cin>>p[i];
    } 
}
void Xuat(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
bool Sochinhphuong(int a)
{
    if (a<0)
    {
        return 0;
    }
    else if (sqrt(a)==int(sqrt(a)))
    {
        return 1;
    }
    else 
    return 0; 
}
bool Songuyento(int a)
{
    int dem=0;
    if (a<2)
    {
        return 0;
    }
    else
    for (int j = 1; j < a; j++)
    {
        if (a%j==0)
        {
            dem++;
        }
    }    
    if (dem==1)
    {
        return 1;
    }
    else
    return 0;
}
int Min(int *p, int n)
{
    int min=32768;
    for (int i = 0; i < n; i++)
    {
        if (Sochinhphuong(p[i])==1&&p[i]<min)
        {
            min=p[i];
        }
    }
    cout<<min<<endl;
    return min;
}
int vitri(int *p, int n)
{
    int dem=0;
    for (int i = 0; i < n; i++)
    {
       if (Songuyento(p[i])==1)
       {
        dem=i+1;
       }
    }
    cout<<dem<<endl;
    return dem;
}
void Chen(int *p, int n)
{
    int k = vitri(p,n),x;
    x=Min(p,n);
    for (int i = k; i < n; i++)
    {
        p[i]=p[i+1];
    }
    p[k]=x;
    n++;
    Xuat(p,n);
}
int main()
{
    int n;
    cout<<"Nhap so phan tu trong mang N = ";
    cin>>n;
    int *p = new int[n];
    Nhap(p,n);
    Xuat(p,n);
    Min(p,n);
    vitri(p,n);
    Chen(p,n);
    delete []p;
    return 0;
}