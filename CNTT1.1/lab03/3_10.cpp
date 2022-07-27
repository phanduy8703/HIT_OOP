#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float p=0, r=0;
    int n=0;
    cout<<"Nhap so tien = "; cin>>p;
    cout<<"Nhap so nam = "; cin>>n;
    cout<<"Nhap lai xuat = "; cin>>r;
    float day[n+1];
    for(int i=0;i<n;i++)
    { 
        day[i]=p*pow((1+r),i+1);
    }
    cout<<"Year\tAmount on deposit"<<endl;
    for(int i=0;i<n;i++){
        cout<<i+1<<"\t"<<day[i]<<endl;
    }
   return 0;
   }