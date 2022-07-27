#include <bits/stdc++.h>
using namespace std;

bool check(long n)
{
    if(n=2)
    {
        return true;
    }
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return false;
            break;
        }
         return true;
    }
}
int main()
{
    long n;
    cin>>n;
    if (check(n))
    {
        cout<<"So nguyen to ";
    }
     cout<"Khong so nguyen to ";
    return 0;

}