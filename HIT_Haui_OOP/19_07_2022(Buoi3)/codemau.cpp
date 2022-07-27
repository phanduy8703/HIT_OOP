#include <bits/stdc++.h>

using namespace std;

// khai báo và định nghĩa lớp Sinh viên
class SinhVien
{
private:
	char maSV[10];
	char hoTen[25];
	char lop[10];
	int khoa;
public:
	void Nhap();
	void Xuat();
};

void SinhVien::Nhap()
{
	cout<<"Nhap ma sinh vien: "; fflush(stdin); gets(maSV);
	cout<<"Nhap ten sinh vien: "; fflush(stdin); gets(hoTen);
	cout<<"Nhap lop: "; fflush(stdin); gets(lop);
	cout<<"Nhap khoa: "; cin>>khoa;
}

void SinhVien::Xuat()
{
	cout<<"Ma sinh vien: "<<setw(25)<<left<<maSV<<"Ten sinh vien: "<<hoTen<<endl;
	cout<<"Lop: "<<setw(34)<<left<<lop<<"Khoa: "<<khoa<<endl;
}
// setw(25)<<left<<maSV
// dành ra 25 ký tự trống để ghi thông tin maSV và căn lề về bên trái
// ghi setw (25) là căn lề về bên phải
class Mon
{
private:
	char tenMon[20];
	int sotrinh;
	float diem;
	friend class Phieu;// khai báo lớp Phieu là bạn của lớp Mon
public:
	void Nhap();
	void Xuat();
};

void Mon::Nhap()
{
	cout<<"Nhap ten mon hoc: "; fflush(stdin); gets(tenMon);
	cout<<"Nhap so trinh: "; cin>>sotrinh;
	cout<<"Nhap diem: "; cin>>diem;
}

void Mon::Xuat()
{
	cout<<setw(20)<<left<<tenMon<<setw(20)<<left<<sotrinh<<diem<<endl;
}

class Phieu
{
private:
	SinhVien x;
	Mon *y;
	int n;
public:
	void Nhap();
	void Xuat();
};

void Phieu::Nhap()
{
	x.Nhap();
	cout<<"Nhap so mon hoc: "; cin>>n;
	y = new Mon[n]; // cấp phát bộ nhớ cho con trỏ/ khai báo không gian mảng
	for(int i = 0; i < n; ++ i)
	{
		cout<<"Nhap thong tin mon hoc thu "<<i + 1<<":"<<endl;
		y[i].Nhap();
	}
}

void Phieu::Xuat()
{
	cout<<"\n====================\n";
	cout<<"\t\tPHIEU BAO DIEM"<<endl;
	x.Xuat();
	cout<<setw(20)<<left<<"Ten mon"<<setw(20)<<left<<"So trinh"<<"Diem"<<endl;
	int sumDiem = 0, sumST = 0;
	for(int i = 0; i < n; ++ i)
	{
		y[i].Xuat();
		sumDiem += y[i].sotrinh * y[i].diem; // vì trong hàm Xuat của lớp Phieu truy xuất đến thuộc tính riêng tư 
		// là số trình và điểm của lớp Mon, nên cần khai báo cho lớp Phiếu là bạn của lớp Môn
		// khai báo lớp bạn thì mọi thuộc tính cũng như phương thức của lớp này, sẽ truy cập được đến thuộc tính + phương thức 
		// riêng tư của lớp kia 
		sumST += y[i].sotrinh;
	}
	cout<<"\t\t       Diem trung binh: "<<sumDiem * 1. / sumST<<endl; // Nhân 1. là ép kiểu sang float hoặc ghi 1.0 hoặc (float)sumDiem...
}

int main()
{
	Phieu A;
	A.Nhap();
	A.Xuat();
}
