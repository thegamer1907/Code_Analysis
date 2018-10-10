#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n,d;
  cin>>n>>d;
  ll ans=0,x,y;
  vector< pair<ll,ll> > v;
  for(int i=0; i<n; i++)
  {cin>>x>>y; v.push_back(make_pair(x,y));}
  sort(v.begin(),v.end());
  ll j=0,cnt=0;
  for(int i=0; i<n; i++)
  {
    while((v[j].first<v[i].first+d) && (v[j].first>=v[i].first) && j<n){cnt+=v[j].second; j++;}
    ans=max(ans,cnt);
    cnt-=v[i].second;
  }
  cout<<ans;
  return 0;
}
