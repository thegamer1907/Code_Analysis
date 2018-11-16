#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair <ll,ll> pll;
#define pb push_back
#define smin(a,b) a=min(a,b)
#define smax(a,b) a=max(a,b)
#define X first
#define Y second
#define pow2(i) (1LL << (i))
#define SZ(x)  (ll)x.size()
#define ted1 __builtin_popcount
const ll maxn=1e4+5,M=11,inf=1e18; const ll bghs=1e9+7;
ll par[maxn],n,ans;
ll gpc(ll v)
{
	if (par[v]<0) return v;
	return par[v]=gpc(par[v]);
}
void mrg(int v,int u)
{
	u=gpc(u); v=gpc(v);
	if (u==v) return;
	if (par[v]<par[u]) swap(u,v);
	ans--;
	par[u]+=par[v];
	par[v]=u;
}
int main()
{
	ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	memset(par,-1,sizeof par);
	cin>>n;ans=n;
	for (ll i=0;i<n;i++) {ll x;cin>>x;x--;mrg(x,i);}
	cout<<ans<<'\n';
}
