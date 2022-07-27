#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n=0;
    cout<<"Nhap so n = "; cin>>n;
    float s=0;
    if (n%2==0)
    {
        for(int i=1; i<=n;i++)
        {
            s=s+ 1/pow(2,i);
        }
    }
    else 
    if (n%2==1)
    {
        s=sqrt(float(n*n+1));
    }
    cout<<"F = "<<s;

    return 0;
}