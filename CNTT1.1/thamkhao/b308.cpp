#include <bits/stdc++.h>

using namespace std;

unsigned long long giaithua(int n){
    unsigned long long rs=1;
    while(n){
        rs*=n;
        n--;
    }
    return rs;
}

unsigned long long giaithua_dequy(int n){
    if(n==0||n==1) return 1;
    return n*giaithua_dequy(n-1);
}

int main(){
    int n;
    bool check=true;
    while(check){
        cout<<"Nhap n: ";
        cin>>n;
        if (n<0) break;
        cout<<"Dung while: "<<n<<"! = "<<giaithua(n)<<endl;
        cout<<"Dung de quy: "<<n<<"! = "<<giaithua_dequy(n)<<endl;
    }
    
}