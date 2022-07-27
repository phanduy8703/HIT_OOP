// #include<bits/stdc++.h>
// using namespace std;
// void Nhap(int *p, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin>>*(p+i);
//     }
    
// }
// void Xuat(int *p, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout<<*(p+i)<<" ";
//     }
// }
// void TangDan(int a[], int n)
// {
//     int tg;
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = i ; j < n; j++)
//         {
//             if(a[i] > a[j])
//             {
//                 tg = a[i];
//                 a[i] = a[j];
//                 a[j] = tg;        
//             }
//         }
//     }
//     Xuat(a,n);
// }
// void GiamDan(int d[], int n)
// {
//     int tg;
//     for(int i = 0; i < n ; i++)
//     {
//         for(int j = i ; j < n; j++)
//         {
//             if(d[i] < d[j])
//             {
//                 tg = d[i];
//                 d[i] = d[j];
//                 d[j] = tg;        
//             }
//         }
//     }
//      Xuat(d,n);
// }
// void Tach(int*p,int n,int a[],int d[]) 
// {
//     int aa=0,dd=0;
//     for(int i=0; i<n; i++) 
//     {
//         if(*(p+i)<0)
//         {
//             a[aa]=*(p+i);
//             aa++;
//         }
//         else 
//         {
//             d[dd]=*(p+i);
//             dd++;
//         }
//     }
// }
// int main()
// {
//     int n, a[100],d[100];
//     cout<<"Nhap N = ";
//     cin>>n;
//     int *p= new int[n];
//     Nhap(p,n);
//     Xuat(p,n);
//     Tach(p,n,a,d);
//     TangDan(a,n);
//     GiamDan(d,n);
//     delete []p;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void Nhap(int &n){
	cout<<"\nNhap so n = ";
	cin>>n;
}
void Nhap(int n , int *p){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";
		cin>>*(p+i);
	}
}
void In(int n , int *p){
		for(int i=0;i<n;i++){
		cout<<"\na["<<i<<"] = "<<*(p+i);
	}
}
void In(int n  ,int *p, fstream& File_out){
	for(int i=0;i<n;i++){
		File_out<<"\na["<<i<<"] = "<<*(p+i);
	}
}
void Sap_xep(int n , int *p){
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(*(p+i) < *(p+j))
				swap(*(p+i),*(p+j));
}
int main(){
	int n=0,*p;
	Nhap(n);
	p=new int [n];
	Nhap(n,p);
	In(n,p);
	fstream File_out;
	File_out.open("ABC2003.txt",ios::out);
	In(n,p,File_out);
	Sap_xep(n,p);
	File_out<<"\nMang sau khi sap xep !!!";
	In(n,p,File_out);
	File_out.close();


	return 0;
}