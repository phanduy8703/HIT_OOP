#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    do
    {
        
        cout<<"Nhap so nguyen duong N = "; cin>>n;
        
    }  while (n<1);  
     for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i==pow(j,2))
            {
                cout<<i<<"\t";
            }
        }
    }
    return 0;
}