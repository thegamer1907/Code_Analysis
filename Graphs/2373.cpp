#include<bits/stdc++.h>
using namespace std;
long long modInverse(long long a, long long m)
{
    long long m0 = m;
    long long y = 0, x = 1;
    if (m == 1)
      return 0;
    while (a > 1)
    {
        long long q = a / m;
        long long t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
       x += m0;
    return x;
}
long long gcd(long long a,long long b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}
long long power(long long x, long long y)
{
    if (y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
}
long long Log2n(long long n)
{
   return (n > 1)? 1 + Log2n(n/2): 0;
}
long long powermod(long long x, long long y, long long p)
{
    long long res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
        res = (res*x) % p;
        y = y>>1; 
        x = (x*x) % p;  
    }
    return res;
}
int r;
bool queen(int a[][1000],int n)
{
    if(n==0)
        return true;
    else
    {
        for(int i=0;i<r;++i)
        {
            int f=0;
            for(int j=0;j<r;++j)
                if(a[i][j]==1)
                    f=1;
            if(f==0)
            for(int j=0;j<r;++j)
                {
                    int f2=0;
                    for(int k=0;k<r;++k)
                        if(a[k][j]==1)
                            f2=1;
                     int x=i,y=j;
                    while(x>=0&&y>=0)
                    {
                        if(a[x][y]==1)
                            f2=1;
                        --x;--y;
                    }
                     x=i;y=j;
                    while(x>=0&&y<r)
                    {
                        if(a[x][y]==1)
                            f2=1;
                        --x;++y;
                    }
                    x=i;y=j;
                    while(x<r&&y>=0)
                    {
                        if(a[x][y]==1)
                            f2=1;
                        ++x;--y;
                    }
                    x=i;y=j;
                    while(x<r&&y<r)
                    {
                        if(a[x][y]==1)
                            f2=1;
                        ++x;++y;
                    }
                    if(f2==0)
                    {
                        a[i][j]=1;
                        if(queen(a,n-1))
                            return true;
                        a[i][j]=0;
                    }

                }
        }

    }
    return false;
}
int depth(int in,vector <int> tr[])
{
int d=0,m;
for(int i=0;i<tr[in].size();++i)
{
    m=depth(tr[in][i],tr);
    if(m>d)
        d=m;
}
return d+1;   
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int a[n+2];
for(int i=1;i<=n;++i)
    cin>>a[i];
vector <int> tr[n+2],r;
for(int i=1;i<=n;++i)
{
    if(a[i]==-1)
    {
        r.push_back(i);
    }
    else
    {
        tr[a[i]].push_back(i);
    }
}
int d=-1,m;
for(int i=0;i<r.size();++i)
{
    m=depth(r[i],tr);
    if(m>d)
        d=m;
}
cout<<d;
}