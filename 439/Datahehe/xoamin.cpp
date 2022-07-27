//xoa cac phan tu nho nhat
#include<bits/stdc++.h>
using namespace std;
void Nhap(int *p, int &n)
{
    cout<<"Nhap so phan tu trong mang N = ";
    cin>>n;
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
}
int Min(int *p, int n)
{
    int min=32767;
    for (int i = 0; i < n; i++)
    {
        if (p[i]<min)
        {
            min=p[i];
        }
    }
    return min;
}
void Xoa(int *p, int &n)
{
    int x=Min(p,n);
    cout<<"\nMang sau khi xoa phan tu nho nhat la"<<endl;
    for (int i = 0; i < n; )
    {
        if (p[i]==x)
        {
            for (int j = i; j < n-1; j++)
            {
                p[j]=p[j+1];
            }
            n--;
        }
        else i++;
    }
    Xuat(p,n);
}
int main()
{
    int n,x;
    int *p= new int[n];
    Nhap(p,n);
    Xuat(p,n);
    Xoa(p,n);
    delete []p;
    return 0;
}