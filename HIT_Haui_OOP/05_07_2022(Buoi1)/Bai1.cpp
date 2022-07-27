//Sinhvien:masv ten sv lop, Giaovien: ten, ten mon, tuoi
#include<bits/stdc++.h>

using namespace std;
class Sinhvien
{
    private:
        char msv[30];
        char tensv[30];
        char lop[30];
    public:
        void nhapsv();
        void xuatsv();

};
class Giaovien
{
    private:
        char tengv[30];
        char tenmon[30];
        int tuoi;
    public:
        void nhapgv();
        void xuatgv();
};
void Sinhvien::nhapsv()
{
    cout<<"Nhap ma sinh vien: "; fflush(stdin); gets(msv);
    cout<<"Nhap ten sinh vien: "; fflush(stdin); gets(tensv);
    cout<<"Nhap ten lop: "; fflush(stdin); gets(lop);
}
void Sinhvien::xuatsv()
{
    cout<<"Ma sinh vien "<<msv<<endl;
    cout<<"Ten sinh vien "<<tensv<<endl;
    cout<<"Lop "<<lop<<endl;
}
void Giaovien::nhapgv()
{
    cout<<"Nhap ten giao vien: "; fflush(stdin); gets(tengv);
    cout<<"Nhap ten mon: "; fflush(stdin); gets(tenmon);
    cout<<"Nhap tuoi: "; cin>>tuoi;
}
void Giaovien::xuatgv()
{
    cout<<"Ma giao vien "<<tengv<<endl;
    cout<<"Ten mon "<<tenmon<<endl;
    cout<<"Tuoi "<<tuoi<<endl;
}
int main()
{
    Sinhvien a;
    Giaovien b;
    a.nhapsv();
    a.xuatsv();
    b.nhapgv();
    b.xuatgv();
    return 0;
}