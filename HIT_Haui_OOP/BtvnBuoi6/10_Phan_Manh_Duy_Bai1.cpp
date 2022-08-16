#include<bits/stdc++.h>

using namespace std;

class Person
{
    protected:
        char name[30];
        char birth[30];
        char address[30];
    public:
        void nhap();
        void xuat();
        Person();
};

void Person::nhap()
{
    cout<<"\nNhap ten: "; fflush(stdin); gets(name);
    cout<<"\nNhap ngay sinh: "; fflush(stdin); gets(birth);
    cout<<"\nNhap dia chi: "; fflush(stdin); gets(address);
}

void Person::xuat()
{
    cout<<"\nTen: "<<name;
    cout<<"\nNgay sinh: "<<birth;
    cout<<"\nDia chi: "<<address;
}

Person::Person()
{

}

class School
{
    private:
        char nameSchool[30];
        char dateSchool[30];
    public:
        friend class Faculty;
        friend class Student;
};

class Faculty
{
    private:
        char nameFaculty[30];
        char dateFaculty[30];
        School x;
    public:
        void nhap();
        void xuat();
        friend class Student;
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

class Student : public Person
{
    private:
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
    Person::nhap();
    cout<<"\nNhap thong tin khoa: ";
    y.nhap();
    cout<<"\nNhap lop: "; fflush(stdin); gets(Class);
    cout<<"\nNhap diem: "; cin>>score;   
}

void Student::xuat()
{
    Person::xuat();
    cout<<"\nThong tin khoa: ";
    y.xuat();
    cout<<"\nLop: "<<Class;
    cout<<"\nDiem: "<<score;

}

Student::Student()
{
    strcpy(name,"");
    strcpy(birth,"");
    strcpy(address,"");
    strcpy(y.x.nameSchool,"");
    strcpy(y.x.dateSchool,"00/00/0000");
    strcpy(y.nameFaculty,"");
    strcpy(y.dateFaculty,"00/00/0000");
    strcpy(Class,"");
    score=0;
}

int main()
{
    Student a;
    cout<<"\nNhap thong tin sinh vien: ";
    a.nhap();
    cout<<"-----------------------------------";
    a.xuat();
    return 0;
}