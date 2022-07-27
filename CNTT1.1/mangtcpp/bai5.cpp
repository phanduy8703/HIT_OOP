#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,p=0,a[100];
    cout<<"Nhap vao bac cua da thuc: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap he so a"<<i<<"=";
        cin>>a[i];
    }
    cout<<"Nhap X = ";
    cin>>x;
    p=a[0];
    for (int i = 1; i < n; i++)
    {
        p=p+(a[i]*pow(x,i));
    }
    cout<<"Gia tri cua Pn(x) = "<<p;
    return 0;
}