#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,t,i;
   cin>>n>>t;
   int a[n-1];
   for(i=1;i<n;i++)
   {
      cin>>a[i];
   }
    int x=1,k=0;
   while(x<n)
   {
      k=x+a[x];
      if(k==t){cout<<"YES"<<endl;
      return 0;
      }
      x=k;
   }
   cout<<"NO"<<endl;
}
