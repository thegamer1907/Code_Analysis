#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    int m;
    cin>>n>>m>>k;
    long long i,a[m];
    for(i=0;i<m;i++)
     cin>>a[i];
    i=0;
    int j;
    long long o=0,t=0,r;
    while(i<m)
    {
        if(a[i]%k!=0)
          r=a[i]+k-(a[i]%k);
        else
         r=a[i];
         i++;
         o++;
         t=1;
         while( i<m && a[i]<=r )
         {
             t++;
             i++;
         }
         for(j=i;j<m;j++)
          a[j]=a[j]-t;
    }
    cout<<o;
    return 0;
}