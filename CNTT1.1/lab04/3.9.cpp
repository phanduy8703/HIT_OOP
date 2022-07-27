#include<iostream>
using namespace std;

void hoandoi(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void sapxep(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=1; j<n; j++)
        {
            if (a[i]>a[j]) 
            {
                hoandoi(a[i],a[j]);
            }
        }
    }
}
int kiemtra(int a[],int n )
{
    int d=0;
    for(int i=0;i<n;i++)
    {
        if (a[i]==a[i+1])
        {
            d=1;
            break;
        }
    }
    if (d>0)
        {
            cout<<"Cac phan tu trong mang khong la duy nhat";
        }
        else cout<<"Cac phan tu trong mang la duy nhat";
}
int main()
{
    int n=0;
    cout<< "Nhap so luong phan tu cua mang: "; cin>> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cout << "Nhap vao phan tu a[" << i << "]: "; cin >>a[i];
    }
    sapxep(a,n);
    kiemtra(a,n);
    return 0;
}
