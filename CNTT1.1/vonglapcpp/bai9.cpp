#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so tu nhien N = ";
	cin >>n;
	for(int i=1;i<=n;i++)
	{
		int dem=0;
		for (int j=1;j<=i;j++)
		{
			if (i%j==0)
            {
                dem=dem+1;
            }
            
		}
		if (dem==2) 
		cout <<i<< "\t";
		
	}
    return 0;
}