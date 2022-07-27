void TangDan(int *p, int n)
{
    int tg;
    for(int i = 0; i < n; i++)
    {
        for(int j = i ; j < n; j++)
        {
            if(p[i] > p[j])
            {
                tg = p[i];
                p[i] = p[j];
                p[j] = tg;        
            }
        }
    }
}
void GiamDan(int *p, int n)
{
    int tg;
    for(int i = 0; i < n ; i++)
    {
        for(int j = i ; j < n; j++)
        {
            if(p[i] < p[j])
            {
                tg = p[i];
                p[i] = p[j];
                p[j] = tg;        
            }
        }
    }
}
void Tach(int*p,int n,int *a,int *d,int &m,int &p) 
{

    int i;
    m=0;
    p=0;
    for(i=0; i<n; i++) 
    {
        if(*(p+i)<0)
        {
            *(a+i) = *(p+i);
        }
        else 
        {
            *(d+i) = *(p+i);
        }
    }
}
void XoaPTNhohonX(int a[20],int &n,int &x)
{
    int      demxoa=0;
    int      i=0;
 
    cout<<"Nhap vao phan tu x :";
    cin>>x;
 
    for(i=0; i<n; )
    {
        if(a[i]<x)
        {
            for(int j=i; j<n-1; j++)
                a[j] = a[j+1];
            n = n - 1;
        }
        else
            i = i + 1;
    }
}