#include<bits/stdc++.h>
using namespace std;


void Nhap(int *p, int n)
{
    cout<<"Nhap mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]= ";
        cin>>p[i];
    }
}


void Xuat(int *p, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}



void kiemtra(int *p, int n)
{
    int dem=0;
    for(int i=0; i<n; i++)
    {
        if(p[i]>p[i+1])
        {
            dem++;
        }
    }
    if(dem>0)
    {
        cout<<"Mang khong hop le"<<endl;
    }
    else
    {
        cout<<"Mang hop le"<<endl;
    }
}


int main()
{
    int n, *p;
    cout<<"Nhap so phan tu: "; cin>>n;
    p=new int[n];
    Nhap(p,n);
    cout<<"Mang la: ";
    Xuat(p,n);
    kiemtra(p,n);
    delete []p;
    return 0;
}
