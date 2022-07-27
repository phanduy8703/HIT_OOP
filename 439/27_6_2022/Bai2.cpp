#include<bits/stdc++.h>
using namespace std;
void Nhap(int *p, int &n)
{
    cout<<"Nhap so phan tu trong mang N = ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"p["<<i<<"] =";
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
void Sapxep(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (p[i]>p[j])
            {
                swap(p[i],p[j]);
            }
            
        }
        
    }
    cout<<"\nMang sau khi sap xep la: ";
    Xuat(p,n);
}
void infile(int *p, int n, fstream& fileout)
{
    for (int i = 0; i < n; i++)
    {
       fileout<<p[i]<<" "; 
    }
    
}
void Kiemtra(int *p, int n)
{
    int dem=0;
    for (int i = 0; i < n; i++)
    {
        if (p[i]<8)
        {
            dem++;
        }
    }
    if (dem==0)
    {
        cout<<"Toan bo phan tu trong mang lon hon 8";
    }
    else
    cout<<"Toan bo phan tu trong mang khong lon hon 8";
    
}
void Xoa(int *p, int n)
{
    for (int i = 0; i < n; )
    {
        if (p[i]<0)
        {
            for (int j = i; j < n-1; j++)
            {
                p[j]=p[j+1];
            }
            n--;
        }
        else i++;
    }
    cout<<"\nMang sau khi xoa cac phan tu am la: ";
    Xuat(p,n);
}
int main()
{
    int n;
    int *p=new int [n];
    Nhap(p,n);
    Xuat(p,n);
    fstream fileout;
    fileout.open("ABC2014.txt",ios::out);
    infile(p,n,fileout);
    Sapxep(p,n);
    fileout<<"\nMang sau khi sap xep la ";
    infile(p,n,fileout);
    fileout.close();
    Kiemtra(p,n);
    Xoa(p,n);
    delete []p;
    return 0;
}