#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mau=1;
    float tong=0;
    do
    {
        cout<<"Nhap vao so nguyen duong N: ";
        cin>>n;
    } while (n<=0);
    for (float i = 1; i <= n; i++)
    {
        mau=mau*i;
        tong=tong+1.0/mau;
        
    }
    cout<<"S = "<<tong;
    
    return 0;
    
}