#include<bits/stdc++.h>
using namespace std;
# define ll long long
int valid(ll x,ll n,ll m, ll k)
{
  ll count=0;
  ll i;
  for(i=1;i<=m;i++)
     count+=min(n,x/i);
  if(count>=k)
    return 1;
  else
    return 0;
}
int main()
{
 ll n,m,k;
ios_base::sync_with_stdio(0);
cin>>n>>m>>k;
ll beg=0;
ll end=n*m;
ll ans=end;
while(end-beg>1)
{
  ll mid=beg+(end-beg)/2;
  
  if(valid(mid,n,m,k))
  {
    end=mid;
    ans=mid;
  }
  else
    beg=mid;
}
cout<<ans;
}