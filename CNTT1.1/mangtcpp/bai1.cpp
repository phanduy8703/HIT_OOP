#include<bits/stdtr1c++.h>
using namespace std;

int main()
{
    int n, a[100];
    float tong=0;
    cout<<"Nhap gia tri so tu nhien N = ";
    cin>>n;
    while (n>=20||n<=2)
    {
        cout<<"Vui long nhap lai N = ";
        cin>>n;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap vao phan tu a["<<i<<"] = ";
        cin>>a[i];
        tong=tong+a[i];
    }
    cout<<"So phan tu cua day la: "<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    cout<<"Tong cac phan tu trong mang la "<<tong<<endl;
    cout<<"Trung binh cong cua cac phan tu trong mang la "<<tong/n<<endl;
    cout<<"Cac so chinh phuong trong mang la: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= a[i]; j++)
        {
            if (sqrt(a[i])==j)
            {
                cout<<a[i]<<"\t";
                break;
            }
        }   
    }
    cout<<endl;
    cout<<"Cac so nguyen to trong mang la: "<<endl;
    for(int i = 1; i <= n; i++)
	{
		int dem=0;
		for (int j = 1; j <= a[i]; j++)
		{
			if (a[i]%j==0)
            {
                dem=dem+1;
            }
            
		}
		if (dem==2) 
		cout <<a[i]<< "\t";
	}
    return 0;
}