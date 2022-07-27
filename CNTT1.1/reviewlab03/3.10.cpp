#include<bits/stdtr1c++.h>
using namespace std;

int main()
{
    int n, a[n];
    float tong=0;
    cout<<"Nhap gia tri so tu nhien N = ";
    cin>>n;
    //nhap n
    while (n>=20||n<=2)
    {
        cout<<"Vui long nhap lai N = ";
        cin>>n;
    }
    //nhap gia tri trong mang
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap vao phan tu a["<<i<<"] = ";
        cin>>a[i];
        tong=tong+a[i];
    }
    cout<<"So phan tu cua day la: "<<n<<endl;
    //in gia tri trong mang
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
   
    cout<<"Tong cac phan tu trong mang la "<<tong<<endl;
    cout<<"Trung binh cong cua cac phan tu trong mang la "<<tong/n;

    return 0;
}