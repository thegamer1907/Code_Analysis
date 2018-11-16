#include <bits/stdc++.h>
using namespace std;

int main()
{
   
   int n,h;
   cin>>n>>h;
   int ans=0;
   for(int i=0;i<n;i++)
   {
       int height;
       cin>>height;
       if(height>h)
       {
           ans+=2;
       }
       else
       {
           ans++;
       }
   }
   cout<<ans;
   
    return 0;
}
