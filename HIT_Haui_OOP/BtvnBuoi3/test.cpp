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
    cout<<"Nhap ten khoa: "; fflush(stdin); gets(nameFaculty);
    cout<<"Nhap ngay thanh lap: "; fflush(stdin); gets(dateFaculty);
    cout<<"Nhap ten truong: "; fflush(stdin); gets(x.nameSchool);
    cout<<"Nhap ngay thanh lap truong: "; fflush(stdin); gets(x.dateSchool);
}

void Faculty::xuat()
{
    cout<<"Ten khoa: "<<nameFaculty;
    cout<<"Ngay thanh lap khoa: "<<dateFaculty;
    cout<<"Ten truong: "<<x.nameSchool;
    cout<<"Ngay thanh lap truong: "<<x.dateSchool;
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
    cout<<"Nhap lop: "; fflush(stdin); gets(Class);
    cout<<"Nhap diem: "; cin>>score;   
    cout<<"Nhap thong tin khoa: ";
    y.nhap();
}

void Student::xuat()
{
    cout<<"Lop: "<<Class;
    cout<<"Diem: "<<score;
    cout<<"Thong tin khoa: ";
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
    cout<<"Nhap n: "; cin>>n;
    a = new Student[n];
    cout<<"Nhap thong tin sinh vien: ";
    for(int i=0; i<n; i++)
    {
        cout<<"Sinh vien "<<i;
        a[i].nhap();
    }
    for(int i=0; i<n; i++)
    {
        a[i].xuat();
    }
    return 0;
}

