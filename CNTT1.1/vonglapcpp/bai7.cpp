#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, a=0;
    cout<< "Nhap so tu nhien N "; cin>>n;
    for (int i = n; i <= 3*n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i==pow(j,2))
            {
                a=j;
                break;
            }
            
        }
        if (a!=0)
        {
            break;
        }
        
    } 
    for (int k = a; k <= 3*n; k++)
    {
        if (k*k<=3*n)
        {
             cout<<k*k <<"  ";
        }
        else break;
    }
    return 0;
}