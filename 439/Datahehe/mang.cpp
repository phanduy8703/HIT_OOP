#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Nhap so luong phan tu cua mang: "; cin>> n;

    int a[n];
    for(int i=0; i<n; i++){
        cout << "Nhap vao phan tu a[" << i << "]: "; cin >>a[i];
    }
    long tong=0, tich=1;
    float tb;

    for(int i=0; i<n; i++){
        tong+=a[i];
        tich*=a[i];
    }
    tb=tong/n;

    
    cout << "Tong cac phan tu cua mang: " <<tong<<endl;
    cout << "Tich cac phan tu cua mang: " <<tich<<endl;
    cout << "Gia tri trung binh cac phan tu cua mang: " << tb;

    return 0;
}