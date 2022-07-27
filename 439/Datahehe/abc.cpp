#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout <<"Nhap 3 so nguyen\n";
    cout <<" a = ";cin>>a;
    cout <<" b = ";cin>>b;
    cout <<" c = ";cin>>c;
    if(a>0&&b>0&&c>0)
    {
    if (b+c>a&&a+c>b&&a+b>c)
    {
        cout <<"La 3 canh cua tam giac";
    } else cout <<"Khong phai la 3 canh tam giac";
}else cout <<"Khong phai la 3 canh tam giac";
    return 0;
}