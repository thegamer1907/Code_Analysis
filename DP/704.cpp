#include "bits/stdc++.h"
#define pi 3.141592653589793238462
#define limit 100005
typedef unsigned long long ulli;
typedef long long int lli;
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   lli i,j,k,t,n,m,l,r,ans;
   lli hashing[200005]={0};
   string s;

   cin>>s;

   for(i=1;i<s.size();i++)
   {
       if(s[i]==s[i-1])
        hashing[i]=hashing[i-1]+1;
        else
            hashing[i]=hashing[i-1];
   }


 //  for(i=0;i<s.size();i++)
  //  cout<<"i="<<i<<" "<<hashing[i]<<endl;


   cin>>m;

   for(i=0;i<m;i++)
   {
       cin>>l>>r;
       ans=hashing[r-1]-hashing[l-1];
       cout<<ans<<endl;
   }

   return 0;
}
