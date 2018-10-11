#include<bits/stdc++.h>
using namespace std;
long long int calcan(long long int n,long long int k)
{
    long long int c=0,g;
    while(n>0)
    {
        g=min(n,k);
        c=c+g;
        n=n-g;
        n=n-n/10;
    }
    return c;
}
int main()
{
   long long int n,l,r,m;
   cin>>n;
   l=1;
   r=n;
   while(l<r)
   {
       m=l+(r-l)/2;
       if(calcan(n,m)>=(n+1)/2)
        r=m;
       else
        l=m+1;
    }
    cout<<r<<endl;
    return 0;
}
