#include<bits/stdc++.h>
using namespace std;
void Nhap(int *p, int &n)
{
    cout<<"Nhap so phan tu trong mang N = ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"p["<<i<<"] = ";
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
            if (p[i]<p[j])
            {
                swap(p[i],p[j]);
            }
            
        }
        
    }
    
}
void Tong(int *p, int n)
{
    int x;
    cout<<"Nhap vao so nguyen X = ";
    cin>>x;
    int tong=0;
    for (int i = 0; i < n; i++)
    {
        if (abs(p[i])<x)
        {
            tong=tong+p[i];
        }    
    }
    cout<<"Tong nhung phan tu trong mang co tri tuyet doi nho hon X la "<<tong<<endl;
}
int Max(int *p,int n)
{
    int max=-32768;
    for (int i = 0; i < n; i++)
    {
        if (p[i]>max)
        {
            max=p[i];
        }
        
    }
    return max;
}
void Xoa(int *p, int &n)
{
    for (int i = 0; i < n;)
    {
        if (p[i]==Max(p,n))
        {
            for (int j = i; j < n-1; j++)
            {
                p[j]=p[j+1];
            }
            n--;
        }
        else i++;
    }
    cout<<"Mang sau khi xoa cac phan tu max la: ";
    Xuat(p,n);
}
void file(int *p, int n, fstream &fileout)
{
    for (int i = 0; i < n; i++)
    {
        fileout<<p[i]<<" ";
    }
    
}
int main()
{
    int n;
    int *p=new int [n];
    Nhap(p,n);
    Xuat(p,n);
    fstream fileout;
    fileout.open("ABC2015.txt",ios::out);
    file(p,n,fileout);
    Sapxep(p,n);
    fileout<<"\nMang sau khi sap xep la ";
    file(p,n,fileout);
    fileout.close();
    Tong(p,n);
    Xoa(p,n);
    delete []p;
    return 0;
}