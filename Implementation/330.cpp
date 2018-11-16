#include<bits/stdc++.h>
using namespace std;
int main()
{
         int n,k,i,c=0,m;
         cin>>n>>k;
         int a[n];
         for(i=1;i<=n;i++)
         {
                  cin>>a[i];
         }
         m=a[k];
         for(i=1;i<=n;i++)
         {
                  if(a[i]>0)
                   {
                           if(a[i]>=m)
                           {
                           c++;
                           }
                   } 
         }
         cout<<c;
}