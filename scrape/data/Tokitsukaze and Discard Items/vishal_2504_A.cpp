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
    long long o=0,t=0,r,l;
    while(i<m)
    {
        if((a[i]-t)%k!=0)
          r=a[i]-t+k-((a[i]-t)%k);
        else
         r=a[i]-t;
         i++;
         o++;
         l=t;
         t++;
         while( i<m && a[i]-l<=r )
         {
             t++;
             i++;
         }
    }
    cout<<o;
    return 0;
}