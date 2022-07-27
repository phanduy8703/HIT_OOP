#include<iostream>
using namespace std;
int main()
{
    int n=0;
    float s=0;
    cout<<"Nhap so n = "; cin>>n;
    for(int i=1;i<=n;i++)
    {
        s=s+1/float(i);
    }
    cout<<"Tong S = "<<s;

    return 0;
}