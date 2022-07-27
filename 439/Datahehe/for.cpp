#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,tong=0,dem=0;
    cout<<"n = "; cin>>n;
    for(int i=1;i<=n;i++)
        if(i%2==0) {
            tong+=i;
            dem++;
        }
    cout <<"tong cac so chan tu 1 toi n = " << tong<<endl;
    cout <<"Trung binh cong = " << (tong*1.0)/dem;
    return 0;
    
}