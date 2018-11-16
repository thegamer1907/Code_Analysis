#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define lim 100005
#define INF 1e13
#define mod 1000000007
int main()
{
  ll n,k;
  cin>>n>>k;
  vector<ll> dv[n+1];
  for(ll i=1;i<=n;i++)
  {
    for(ll j=i;j<=n;j+=i)
      dv[j].push_back(i);

  }
  ll ans[n+1][k+1];
  for(ll i=1;i<=n;i++)
    ans[i][1]=1;
  for(ll j=2;j<=k;j++)
  {
    for(ll i=1;i<=n;i++)
    {
      ll x=0;
      for(ll z=0;z<dv[i].size();z++)
       { x+=ans[dv[i][z]][j-1];
         x%=mod;}
         ans[i][j]=x%mod;
       }
  }
  ll fans=0;
  for(ll i=1;i<=n;i++)
    {fans+=ans[i][k];
    fans%=mod;}
  cout<<fans%mod<<endl;

}