#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m=0,n=0,flag=0,t=0;
   cin>>n>>m;
   int a[n];
   
   for(int i=1;i<=n;i++)
   {
       cin>>a[i];
   }
   for(int i=1;i<=n;i=i+a[i])
  {        
       if(i==m) 
       {
           
           flag=1;
            break;
       }
   }
 
   if(flag==0)
   cout<<"NO";
   else
   cout<<"YES";
   return 0;
}