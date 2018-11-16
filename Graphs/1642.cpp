#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,def,pos=1;
int a[30010];
int main()
{
   cin>>n>>def;
   int flag=0;
   for(int i=1;i<n;i++)
   {
       cin>>a[i];
   }

   for(int j=1;j<n;j++)
   {
       pos=a[pos]+pos;
       if(pos==def)
       {
           flag=1;
           break;
       }

   }
   if(flag==1)
   {
       cout<<"YES"<<endl;
   }
   else
   cout<<"NO"<<endl;
    return 0;
}
