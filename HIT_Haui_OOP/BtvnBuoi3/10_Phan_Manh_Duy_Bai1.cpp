#include<bits/stdc++.h>
using namespace std;

class School
{
        char nameSchool[30];
        char dateSchool[30];
    public:
        friend class Faculty;
};

class Faculty
{
        char nameFaculty[30];
        char dateFaculty[30];
        School x;
    public:
        void nhap();
        void xuat();
};

void Faculty::nhap()
{
    cout<<"\nNhap ten khoa: "; fflush(stdin); gets(nameFaculty);
    cout<<"\nNhap ngay thanh lap: "; fflush(stdin); gets(dateFaculty);
    cout<<"\nNhap ten truong: "; fflush(stdin); gets(x.nameSchool);
    cout<<"\nNhap ngay thanh lap truong: "; fflush(stdin); gets(x.dateSchool);
}

void Faculty::xuat()
{
    cout<<"\nTen khoa: "<<nameFaculty;
    cout<<"\nNgay thanh lap khoa: "<<dateFaculty;
    cout<<"\nTen truong: "<<x.nameSchool;
    cout<<"\nNgay thanh lap truong: "<<x.dateSchool;
}

class Student
{
        Faculty y;
        char Class[20];
        float score;
    public:
        void nhap();
        void xuat();
        Student(); 
};

void Student::nhap()
{
    cout<<"\nNhap lop: "; fflush(stdin); gets(Class);
    cout<<"\nNhap diem: "; cin>>score;   
    cout<<"\nNhap thong tin khoa: ";
    y.nhap();
}

void Student::xuat()
{
    cout<<"\nLop: "<<Class;
    cout<<"\nDiem: "<<score;
    cout<<"\nThong tin khoa: ";
    y.xuat();
}

Student::Student()
{
    strcpy(Class,"");
    score=0;
}

int main()
{
    Student *a;
    int n;
    cout<<"\nNhap so luong sinh vien: "; 
    cin>>n;
    a = new Student[n];
    cout<<"\nNhap thong tin sinh vien: ";
    for(int i=0; i<n; i++)
    {
        cout<<"\nSinh vien "<<i+1;
        a[i].nhap();
    }
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||";
    for(int i=0; i<n; i++)
    {
        cout<<"\nSinh vien "<<i+1;
        a[i].xuat();
    }
    return 0;
}

