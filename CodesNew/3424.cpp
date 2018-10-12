#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[100],m,n,c,min,sum=0,mx=-1;
   double b;
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
      sum+=a[i];
      mx=max(mx,a[i]);
   }
     sum=sum+m;
   cout<<max(sum/n+(sum%n==0?0:1),mx)<<" "<<mx+m<<endl;
   return 0;
}
