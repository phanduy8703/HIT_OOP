#include<iostream>
using namespace std;

int main()
{
    int n, a=1, b=1, gt=1;
    cout << "Nhap so tu nhien N = "; cin>>n;
    for (int i = 1; i <=n; i++)
    {
        gt=gt*i;
        if (i%2==0)
        {
            a=a*i;
        }
        else b=b*i;
    }
    cout << "Giai thua cua " <<n<<" la " <<gt<<endl;
    cout << "Giai thua chan cua " <<n<<" la "<<a<<endl;
    cout << "Giai thua le cua " <<n<<" la " <<b;
    return 0;
}

