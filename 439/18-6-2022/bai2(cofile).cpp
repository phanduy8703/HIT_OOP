#include<bits/stdc++.h>
using namespace std;
 void Nhap(int &n)
 {
    cout<<"Nhap so phan tu trong mang N = ";
    cin>>n;
 }


 void Nhap(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
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
    
}
void file(int *p, int n, fstream& fileout)
{
    for (int i = 0; i < n; i++)
    {
        fileout<<p[i]<<" ";
    }
}
int main()
{
    int n, *p;
    Nhap(n);
    p= new int [n];
    Nhap(p,n);
    Xuat(p,n);
    fstream fileout;
    fileout.open("ABC2022.txt",ios::out);
    file(p,n,fileout);
    Sapxep(p,n);
    fileout<<"\nMang sau khi sap xep la ";
    file(p,n,fileout);
    fileout.close();

    return 0;
}