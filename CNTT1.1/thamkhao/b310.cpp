#include <bits/stdc++.h>

using namespace std;

long long dao(long long a)
{
    long long rs=0;
    while (a)
    {
        int last=a%10;
        a/=10;
        rs=rs*10+last;
    }
    return rs;
}

bool doixung(long long a)
{
    string s=to_string(a);
    for(int i=0; i<(s.size()/2); i++)
    {
        if(s[i]!=s[s.size()-i])
        {
            return false;
        }
    }
    return true;
}

bool snt(long long a)
{
    if (a<2) return false;
    if (a==2 || a==3) return true;
    else 
    {
        for(int i=2; i<= sqrt(a); i++)
        {
            if (a%i==0) return false;
        }
    }
    return true;
}

long long tongle(long long a){
    long long sum=0;
    while (a){
        int last=a%10;
        a/=10;
        if (last%2==1){
            sum+=last;
        }  
    }
    return sum;
}

long long tongchan(long long a){
    long long sum=0;
    while (a){
        int last=a%10;
        a/=10;
        if (last%2==0){
            sum+=last;
        }  
    }
    return sum;
}

bool chinhphuong(long long a){
    long long temp=sqrt(a);
    if ( pow(temp,2) == a) return true;
    return false;
}

int main(){
    long long n;
    do{
        
        cin>>n;
    }
    while(n<1);
    cout<<"So dao nguoc cua "<<n<<" la: "<<dao(n)<<endl;
    if (doixung(n)) cout<<n<<" doi xung"<<endl;
    else cout<<n<<" khong doi xung"<<endl;
    if (snt(n)) cout<<n<<" la so nguyen to"<<endl;
    else cout<<n<<" khong la so nguyen to"<<endl;    
    cout<<"Tong cac chu so le la: "<<tongle(n)<<endl;
    cout<<"Tong cac chu so chan la: "<<tongchan(n)<<endl;
    if (chinhphuong(n)) cout<<n<<" la so chinh phuong"<<endl;
    else cout<<n<<" khong la so chinh phuong"<<endl;
}