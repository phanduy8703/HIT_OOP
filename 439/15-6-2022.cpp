//tach mang chan le
//chinh phuong khong chinh phuong
//am duong
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
    cout<<"Mang: ";
    for (int i = 0; i < n; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
bool KtraSCP(int a)
{
    if (a<0)
    {
        return 0;
    }
    else 
    {
        if (sqrt(a)==int(sqrt(a)))
        {
        return 1;
        }
        else 
        return 0;
    } 
}
void Tach(int *p, int n, int *p1, int *p2, int &n1, int &n2)
{
    for (int i = 0; i < n; i++)
    {
        if (KtraSCP(p[i])==1)
        {
            p1[n1]=p[i];
            n1++;
        }
        else
        {
            p2[n2]=p[i];
            n2++;
        }
    }
    Xuat(p1,n1);
    Xuat(p2,n2);
}
int main()
{
    int n,n1=0,n2=0;
    int *p = new int[n];
    int *p1 = new int[n1];
    int *p2 = new int[n2];
    Nhap(p,n);
    Xuat(p,n);
    Tach(p,n,p1,p2,n1,n2);
    delete []p,p1,p2;
    return 0;  
}