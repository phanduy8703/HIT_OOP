#include<bits/stdc++.h>
using namespace std;

void Nhap(int *p, int &n)
{
    cout<<"Nhap vao so phan tu cua mang N = ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"p["<<i<<"] = ";
        cin>>p[i];
    }
    
}
void Xuat(int *p, int n)
{
    for(int i =0; i<n ; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
void Sapxep(int *p, int n)
{
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(p[i]>p[j])
            {
                swap(p[i],p[j]);
            }
        }
    }
    Xuat(p,n);
}
void file(int *p, int n, fstream& fileout)
{
    for(int i=0; i<n; i++)
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
    fileout.open("CONCAC1.txt",ios::out);
    file(p,n,fileout);
    Sapxep(p,n);
    fileout<<"\nMang sau khi sap xep la :"<<endl;
    file(p,n,fileout);
    fileout.close();
    delete []p;
    return 0;
}