#include <bits/stdc++.h>
using namespace std;
int main()
{
   int i,j,k=0,t,n,tz,to;
   cin>>n;
   int A[n];
   tz= to=0;
   for(i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]== 0) tz++;
        else to++;
    }
   for(i=0;i<n;i++)
   {
       int oo,zz;
       zz=oo=0;
       for(j= i;j<n;j++)
       {
           if(A[j]==0) zz++;
           else oo++;
           int a= to + (zz-oo);
           if(a>k) k= a;
       }
   }
   cout<<k;
    return 0;
}
