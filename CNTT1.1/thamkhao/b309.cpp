#include <bits/stdc++.h>

using namespace std;

void hoan_doi(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

void sap_xep(int a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=1; j<n; j++){
            if (a[i]>a[j]) {
                hoan_doi(a[i],a[j]);
            }
        }
    }
}

void check(int a[],int n){
    bool ck=true;
    for(int i=0; i<n-1; i++){
        if (a[i]==a[i+1]) {
            ck=false;
            break;
        }
    }
    if (ck) cout<<"Day tren la duy nhat";
    else cout<<"Day tren khong la duy nhat";
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sap_xep(a,n);
    check(a,n);
}