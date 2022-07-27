#include<bits/stdc++.h>

using namespace std;
class SACH
{
    private:
        char tensach[30];
        int sotrang;
        char tacgia[30];
    public:
        void nhap();
        void xuat();

};
void SACH::nhap()
{
    cout<<"Nhap ten sach: "; fflush(stdin); gets(tensach);
    cout<<"Nhap so trang: "; cin>>sotrang;
    cout<<"Nhap ten tac gia: "; fflush(stdin); gets(tacgia);
}
void SACH::xuat()
{
    cout<<"Ten sach "<<tensach<<endl;
    cout<<"So trang "<<sotrang<<endl;
    cout<<"Tac gia "<<tacgia<<endl;
}
int main()
{
    SACH a;
    a.nhap();
    a.xuat();
    return 0;
}