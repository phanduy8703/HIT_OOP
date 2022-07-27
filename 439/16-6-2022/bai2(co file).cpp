#include<bits/stdc++.h>
 using namespace std;

 void Nhap(int *p, int &n)
{
    cout<<"Nhap so phan tu trong mang N = ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    } 
}
void Xuat(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
void fileout(int *p, int n)
{
    fstream fileout;
    fileout.open("ABC2014.TXT",ios::out);
    for (int i = 0; i < n; i++)
    {
        fileout<<p[i]<<" ";
    }
    
    fileout.close;
}
void Sapxep(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (p[i]<p[j])
            {
                swap(p[i],p[j]);
            }  
        }       
    }
    Xuat(p,n);  
}
void Xoa(int *p, int &n)
{
    for (int i = 0; i < n; )
    {
        if (p[i]%2==0)
        {
            for (int j = i; j < n-1; j++)
            {
                p[j]=p[j+1];
            }
            n--;
        }
        else i++;
    }
    Xuat(p,n);
}
// void e(int *p, int n)
// {
//     int d=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (p[i]<0)
//         {
//             swap(p[i],p[d]);
//             d++;
//         }      
//     }
//     Xuat(p,n);
// }
int main()
{
    int n;
    int *p = new int [n];
    Nhap(p,n);
    Xuat(p,n);
    fileout(p,n);
    Sapxep(p,n);
    Xoa(p,n);
    delete []p;
    return 0;
}