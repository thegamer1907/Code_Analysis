#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define re return
vector <ll> g[200000+10];
ll k[200000+10]={0};
ll a[200000+10];
ll s[200000+10]={10000000};
ll maxs[200000+10]={0};
ll b[200000+10]={0};
void bfs(ll l){
  b[l]=1;
  //cout << l << endl;
  for (int i=0;i<k[l];++i){
    if (b[g[l][i]]==0){
    if (a[g[l][i]]==1){
    s[g[l][i]]=a[g[l][i]]+s[l];
    }
    else 
    s[g[l][i]]=a[g[l][i]]*s[l];
    maxs[g[l][i]]=max(s[g[l][i]],maxs[l]);
    if (b[g[l][i]]==0)
    bfs(g[l][i]);
    }
  }
}
int main()
{
  ll n,m;
  cin >> n >> m;
  for (int i=1;i<=n;++i) cin >> a[i];
  s[1]=a[1];
  maxs[1]=a[1];
  ll x,y;
  for (int i=1;i<n;++i){ cin >> x >> y; g[x].push_back(y); k[x]++; g[y].push_back(x); k[y]++;}
  ll sum=0;
  bfs(1); 
  for (int i=2;i<=n;++i){if(k[i]==1 && maxs[i]<=m ){ ;sum++;}}
  cout << sum;
  return 0;
}
