#include<iostream>
using namespace std;

int main()
{
    int n, tong=0, dem=0;
    cout<< "Nhap so tu nhien N = "; cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cout<<i<<"\t";
            tong=tong+i;
            dem++;
        }
       
    } 
    cout<< "gia tri trung binh la "<< tong/dem;
    return 0;
}