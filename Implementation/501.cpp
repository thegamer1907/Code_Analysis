#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],d=0;
int main()
{
   
   cin>>n>>k;
   for(int i=1;i<=n;i++)    cin>>a[i];
   for(int i=1;i<=n;i++)
   {
       if((a[i]>=a[k])&&(a[i]>0))   d++;
   }
   cout<<d;
}