#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n =0, x=0;
    float s=0;
    cout<<"Nhap so n = "; cin>>n;
    cout<<"Nhap so x = "; cin>>x;
    if (n%2==0)
    {
        for (int i=1;i<=n;i++)
        {
            s=s+pow(x,i)/pow(3,i-1);
        }
    }
    else
        s=0;

    cout<<"S = "<<s;

    return 0;
}