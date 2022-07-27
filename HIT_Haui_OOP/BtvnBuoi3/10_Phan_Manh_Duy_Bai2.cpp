#include<bits/stdc++.h>
using namespace std;

class Array
{
        int n;
        int *value;
    public:
        Array();
        Array(int n);
        ~Array();
        void nhap();
        void xuat();
};
Array::Array()
{
    n=0;
}
Array::Array(int size)
{
    n=size;
    value = new int [n];
    for (int i = 0; i < n; i++)
    {
        value[i]=0;
    }
    // Array = (int*)calloc(n,sizeof(int));
}
Array::~Array()
{

}
void Array::nhap()
{
    cout<<"\nNhap N = ";
    cin>>n;
    value = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Value["<<i<<"] = ";
        cin>>value[i];
    }
}
void Array::xuat()
{
    for (int i = 0; i < n; i++)
    {
        cout<<value[i]<<" ";
    }
}
int main()
{
    Array a(7);
    a.xuat();
    a.~Array();
    a.nhap();
    a.xuat();
    return 0;
}


