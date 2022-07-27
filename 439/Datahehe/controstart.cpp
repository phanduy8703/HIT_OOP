#include<bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string ten, diachi;
    int tuoi;
};

int main()
{
 SinhVien x;
 x.ten = "Phan Manh Duy";
 x.tuoi = 18;
 x.diachi = "Ha Noi";
 SinhVien *p=&x;
 cout<<p->ten<<" "<<p->tuoi<<" "<<p->diachi<<endl;
  return 0;
}