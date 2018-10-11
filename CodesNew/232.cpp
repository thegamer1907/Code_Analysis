#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll n,t,sum=0;
  cin>>n>>t;
  vector<ll>v(n),v1(n);
  for(ll i=0;i<n;i++)
  {
   cin>>v[i];
   sum+=v[i];
   v1[i]=sum;
  }
  
  ll max=0,ans=0;
  for(ll i=0;i<n;i++)
  {
    ans=upper_bound(v1.begin(),v1.end(),t)-v1.begin()-i;
    if(ans>max)
     max=ans;
    t=t+v[i];
  }
  cout<<max<<"\n";
return 0;
}