#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cout <<"Nhap so tu nhien M = "; cin >> m;
    cout <<"Nhap so tu nhien N = "; cin >> n;
    if (m>n)
    {
        return 0;
    }
    else 
    for (int i = m; i <= n; i++)
    {
        cout <<i<<"\t";
    }
    cout<<endl;
    for (int i = n; i >= m; i--)
    {
        cout <<i<<"\t";
    }
    
    return 0;
} 