#include<iostream>
using namespace std;
int main()
{
    int n, tong=0;
    float x=-1;
    do
    {
    cout<< "Nhap so tu nhien N = "; cin>>n;
    if (n<0)
    {
        return 0;
    }
    else{
        x++;
        tong=tong+n;
        }
    } while (n>0);
    cout<< "Tong cac so tu nhien co gia tri la "<<tong<<endl;
    cout<< "Gia tri trung binh cua cac so tu nhien tren la "<<float(tong/x);
    return 0;
}
