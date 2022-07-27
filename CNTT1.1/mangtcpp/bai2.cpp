#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, b[100], max=b[0], x, dem=0, k;
    cout<<"Nhap gia tri so tu nhien N = ";
    cin>>n;
    while (n>10||n<=0)
    {
        cout<<"Vui long nhap lai N = ";
        cin>>n;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap vao phan tu b["<<i<<"] = ";
        cin>>b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (max<b[i])
        {
            max=b[i];
        }   
    }
    cout<<"Gia tri lon nhat trong mang la: "<<max<<endl;
    cout<<"Nhap so thuc X = ";
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        if (b[i]>=x)
        {
            dem++;
        }       
    }
    cout<<"So phan tu lon hon hoac bang "<<x<<" trong mang la: "<<dem<<endl;
    cout<<"Nhap so nguyen k = ";
    cin>>k;
    while (k<1||k>=n)
    {
        cout<<"K khong hop le. Vui long nhap lai k = ";
        cin>>k;
    }
    cout<<"Phan tu b["<<k<<"] = "<<b[k]<<endl;
   cout<<"Mang sau khi xoa phan tu b["<<k<<"]tro thanh: ";
   for (int i = k; i < n; i++)
    {
        b[i]=b[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        cout<<b[i]<<"\t";
    }
    
    return 0;
}