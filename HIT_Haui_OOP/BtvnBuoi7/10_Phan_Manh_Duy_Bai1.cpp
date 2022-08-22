#include<bits/stdc++.h>

using namespace std;

class Hang
{
	private: 
		float trongLuong, giaTien, theTich;
	public:
		Hang();
		Hang(float trongLuong, float giaTien, float theTich);
		Hang operator + (Hang a);
		bool operator == (Hang a);
		friend istream &operator >> (istream &in, Hang &a);
    	friend ostream &operator << (ostream &out, Hang a);	
};

Hang::Hang()
{
	trongLuong = giaTien = theTich = 0;	
}

Hang::Hang(float trongLuong, float giaTien, float theTich)
{
	this -> trongLuong = trongLuong;
	this -> giaTien = giaTien;
	this -> theTich = theTich;
}

Hang Hang::operator + (Hang a)
{
	Hang c;
	c.trongLuong = this -> trongLuong + a.trongLuong;
	c.giaTien = this -> giaTien + a.giaTien;
	c.theTich = this -> theTich + a.theTich;
	return c;
}

bool Hang::operator == (Hang a)
{
	if(this->trongLuong == a.trongLuong && this->giaTien == a.giaTien)
    {
		return true;
	}
	return false;
}

istream &operator >> (istream &in, Hang &a)
{
	cout<<"Nhap trong luong: "; in>>a.trongLuong;
    cout<<"Nhap gia tien: ";    in>>a.giaTien;
    cout<<"Nhap the tich: ";    in>>a.theTich;
    return in;
}

ostream &operator << (ostream &out, Hang a)
{
	out<<"\nTrong luong: "<<a.trongLuong;
	out<<"\nGia tien: "<<a.giaTien;
	out<<"\nThe tich: "<<a.theTich;
	return out;
}

int main()
{
	Hang a,b,c;
	cout<<"\tNhap a"<<endl; 
    cin>>a;
    cout<<"\tNhap b"<<endl;
    cin>>b;
    c = a + b;
	cout<<"\tTong hai mat hang"<<endl<<c<<endl;
    if(a == b)
    {
        cout<<"A cung gia va trong luong voi b"<<endl;
    }else
    {
        cout<<" A khong cung gia va trong luong voi b"<<endl;
	}
}