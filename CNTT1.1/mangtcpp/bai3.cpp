#include<bits/stdc++.h>
using namespace std;
void test(int b[], int n)
{
    int dem=0;
    for (int i = 0; i < n; i++)
    {
        if (b[i]>b[i+1])
        {
            dem=dem+1;
        }
    } 
    if (dem==0)
    {
        cout<<"Cac phan tu trong day sap xep theo thu tu tang dan"<<endl;
    }
    else
    cout<<"Cac phan tu trong day khong sap xep theo thu tu tang dan"<<endl;
}
void xoa(int b[], int n)
{
    int x;
    cout<<"Nhap gia tri cua X = ";
    cin>>x;
    cout<<"Mang sau khi xoa la:"<<endl;
    for (int i = 0; i < n; i++)
    {
        if (b[i]>=x)
        {
            cout<<b[i]<<"\t";
        }
    }
}
int main()
{
    int b[100], n;
    cout<<"Nhap so thuc N = ";
    cin>>n;
    while (n<=0||n>30)
    {
        cout<<"N khong hop le vui long nhap lai N = ";
        cin>>n;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap vao phan tu b["<<i<<"] = ";
        cin>>b[i];
    }
   test(b,n);
   xoa(b,n);
}