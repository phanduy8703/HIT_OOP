#include<bits/stdc++.h>
using namespace std;
void Nhap(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin>>*(p+i);
    }
    
}
void Xuat(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<*(p+i)<<" ";
    }
}
void swap (int a, int b)
{
    int tg;
    tg=a;
    a=b;
    b=tg;
        
 }
void sapxep(int *p; int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(p[i]>p[j])
            {
                 swap(p[i],p[j]);
            }
           
        }
    }
    for(int i=0;i<n;i++)
    {
        if(p[i]>0)
        {
            for(int j=i+1;j<n;j++)
        {
            swap(p[i],p[j]);
        }
        }
        
       
         
        }
        xuat(p,n);
    }
int main()
{
    int n;
    cout<<"Nhap N = ";
    cin>>n;
    int *p= new int[n];
    Nhap(p,n);
    Xuat(p,n);
    sapxep(p,n);
    delete []p;
    return 0;
}