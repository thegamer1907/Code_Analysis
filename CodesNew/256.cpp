#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,ar[100000],n;
   cin>>n>>t;
   for(int i=0;i<n;i++)
   {
       cin>>ar[i];
   }
   int s=0,e=0;
   int sm=0;
   int mx=INT_MIN;
   while(s<n)
   {
       while(e<n&&sm+ar[e]<=t)
       {
           sm+=ar[e++];
       }
        mx=max(mx,e-s);
       sm-=ar[s++];

   }
   cout<<mx<<endl;
    return 0;
}
