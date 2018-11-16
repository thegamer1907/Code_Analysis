#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,i,d;d=1;
   cin>>n>>m;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   while(d<m)
   {
     d=d+a[d-1]; 
   }
   if(d==m)
   cout<<"YES";
   else
   cout<<"NO";
}