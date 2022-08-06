#include<bits/stdc++.h>

using namespace std;

class ELECTRONIC
{
    protected:
        double congSuat;
        double dienAp;
    public:
        ELECTRONIC(double congSuat, double dienAp);

};

class MAYGIAT : public ELECTRONIC
{
    private:
        double dungTich;
        string loai;
    public:
        MAYGIAT(double congSuat, double dienAp, double dungTich, string loai);
        void xuat();

};

class TULANH : public ELECTRONIC
{
    private:
        double dungTich;
        int soNgan;
    public:
        TULANH(double congSuat, double dienAp, double dungTich, int soNgan);
        void xuat();

};

void MAYGIAT::xuat()
{
    cout<<"Thong so may giat!"<<endl;
    cout<<"Cong suat:"<<congSuat<<"\nDien ap: "<<dienAp<<"\nDung tich: "<<dungTich<<"Kg"<<"\nLoai: "<<loai<<endl;
    cout<<"---------------------------------"<<endl;

}

void TULANH::xuat()
{
    cout<<"Thong so tu lanh!"<<endl;
    cout<<"Cong suat:"<<congSuat<<"\nDien ap: "<<dienAp<<"\nDung tich: "<<dungTich<<"L"<<"\nSo ngan: "<<soNgan<<endl;
    cout<<"---------------------------------"<<endl;

}

ELECTRONIC::ELECTRONIC(double congSuat, double dienAp)
{
    this -> congSuat = congSuat;
    this -> dienAp = dienAp;

}

MAYGIAT::MAYGIAT(double congSuat, double dienAp, double dungTich, string loai) : ELECTRONIC(congSuat, dienAp)
{
    this -> dungTich = dungTich;
    this -> loai = loai;

}

TULANH::TULANH(double congSuat, double dienAp, double dungTich, int soNgan) : ELECTRONIC(congSuat, dienAp)
{
    this -> dungTich = dungTich;
    this -> soNgan = soNgan;

}

int main()
{
    MAYGIAT a(1000, 1000, 10, "To");
    TULANH b(2000, 2000, 7, 4);
    a.xuat();
    b.xuat();
    return 0;

}