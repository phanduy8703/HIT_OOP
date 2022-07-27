#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,c=0;
    cout<< "Nhap so tu nhien N = "; cin>>n;
    if (n==1)
    {
        cout<<"ff";
    }
    else
    {
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            cout<<"ff";
            c=1;
            break;
        }
    }
    if(c==0)
       cout<<"tt";
    }
    return 0;
}