#include <bits/stdc++.h>
using namespace std;
float a,b,c;

float Delta(float a,float b,float c)
{
    double D= b*b-4*a*c;
    if (D<0) return -1;
    else return sqrt(D);
}

void in_nghiem_pt_bac_1(int so_nghiem)
{
    if (so_nghiem==2) cout<<"co vo so nghiem"<<endl;
    else
    {
        float x=1.0*-c/b;
        if (so_nghiem==1) cout<<"co 1 nghiem: "<<x<<endl;
        else cout<<"vo nghiem"<<endl;
    }
}

int giai_pt_bac_1(float a,float b)
{
    if (a==0 && b==0) return 2;
    if (a!=0) return 1;
    return 0;
}

void in_nghiem_pt_bac_2(int i, float D)
{
    float x1=((-b+D)/(2.0*a)), x2=((-b-D)/(2.0*a));
    if (i==2) cout<<"co 2 nghiem: "<<x1<<" va "<<x2<<endl;
    if (i==1) cout<<"co 1 nghiem kep: "<<-b/2.0*a<<endl;
    if (i==0) cout<<"vo nghiem"<<endl;
}

int giai_pt_bac_2(float a, float b, float c)
{
    float D=Delta(a,b,c);
    if (D==-1) return 0;
    else
    {
        if (D==0) return 1;
        else return 2;
    }
}

int main()
{
    bool Loop=true;
    while(Loop)
    {
        cout<<"Nhap 3 so a,b,c: ";
        cin>>a>>b>>c;
        cout<<"Phuong trinh ";
        cout<<a<<"*x*x ";
        if (b>=0) cout<<"+ "<<b<<"*x ";
        else cout<<b<<"*x ";
        if (c>=0) cout<<"+ "<<c<<" = 0 ";
        else cout<<c<<" =0 ";
        if (a==0) 
        {
            int so_nghiem=giai_pt_bac_1(b,c);
            in_nghiem_pt_bac_1(so_nghiem);
        }
        else
        {
            int i=giai_pt_bac_2(a,b,c);
            float D=Delta(a,b,c);
            in_nghiem_pt_bac_2(i,D);
        }
        return 0;
    }
    
}
