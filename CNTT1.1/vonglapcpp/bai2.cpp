#include<iostream>
using namespace std;

int main()
{
    int n, m, tong=0;
    cout <<"Nhap so tu nhien M = "; cin >> m;
    cout <<"Nhap so tu nhien N = "; cin >> n;
    if (m>n)
    {
        return 0;
    }
    else 
    for (int i = m; i <= n; i++)
    {
        tong=tong+i;
    }
    cout<<"Tong cac so tu nhien lien tiep tu "<<m << " den "<<n << " la "<<tong ;
    return 0;
}