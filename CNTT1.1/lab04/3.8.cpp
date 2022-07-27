#include<iostream>
using namespace std;
unsigned long giai_thua (int n)
{
    unsigned long s=1;
    for(int i=1;i<=n;i++)
        s=s*i;
    return s;
}
unsigned long giai_thua2 (int n)
{
    if (n==1)
        return 1;
    return n*giai_thua2(n-1);
}
int main()
{
    int n=1;
    while(n>0)
    {
        cout<<"Nhap so N = "; cin>>n;
        if(n>0)
            cout<<"N! co gia tri = "<<giai_thua(n)<<endl;
            cout<<"N! co gia tri = "<<giai_thua2(n)<<endl;
    }
    return 0;
}

