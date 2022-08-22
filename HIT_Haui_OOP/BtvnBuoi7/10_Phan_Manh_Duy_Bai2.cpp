#include<bits/stdc++.h>

using namespace std;

class ThuaDat
{
	private:
		float dai, rong, giaTien;
	public:
		ThuaDat();
		ThuaDat(float dai, float rong, float giaTien);
		float operator * ();
		bool operator == (ThuaDat a);
		friend istream &operator>>(istream &in, ThuaDat &a);
		friend ostream &operator<<(ostream &out, ThuaDat a);
};

ThuaDat::ThuaDat()
{
	dai = rong = giaTien = 0;
}

ThuaDat::ThuaDat(float dai, float rong, float giaTien)
{
	this -> dai = dai;
	this -> rong = rong;
	this -> giaTien = giaTien;
}

float ThuaDat::operator *()
{
	return this->dai * this->rong;
}

bool ThuaDat::operator == (ThuaDat a)
{
	if(this->operator *() == a.operator *() && this->giaTien == a.giaTien)
    {
		return true;
	}
	return false;
}

istream &operator>>(istream &in, ThuaDat &a)
{
    cout<<"Nhap chieu dai: ";   in>>a.dai;
    cout<<"Nhap chieu rong: ";  in>>a.rong;
    cout<<"Nhap gia tien: "; in>>a.giaTien;
    return in;
}

ostream &operator<<(ostream &out, ThuaDat a)
{
	out<<"Dien tich: "<<a.operator *()<<endl;
	out<<"Gia tien: "<<a.giaTien<<endl;
	return out;
}

int main(){
	ThuaDat a,b;
	cout<<"\tNhap thua dat a"<<endl;	 
    cin>>a;
	cout<<"\tNhap thua dat b"<<endl; 	 
    cin>>b;
	cout<<"\tThong tin thua dat a"<<endl<<a;
	cout<<"\tThong tin thua dat b"<<endl<<b;
	if(a==b)
    {
		cout<<"A co cung dien tich va gia tien voi b"<<endl;
	}else
    {
		cout<<"A khong cung dien tich va gia tien voi b"<<endl;
	}
}

