#include <bits/stdc++.h>
 
using namespace std;
 
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("in.in", "r", stdin),freopen("out.out", "w", stdout);
#define ll long long int
#define FF first
#define SS second
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define pd(x) printf("%d\n",x)
#define plld(x) printf("%lld\n",x)
#define pss printf
#define MOD 1000000007
#define INF 1e18
#define eps 0.00001
#define endl '\n'
#define debug(n1) cout<<n1<<endl
ll n,m,c[100005];
vector<ll>adj[100005],cadj[100005];
set<ll>s;
int main() {
 
SPEED;
cin>>n>>m;
for(int i=1;i<=n;i++)
	cin>>c[i],cadj[c[i]].pb(i);
for(int i=1;i<=m;i++)
{
	ll x,y;
	cin>>x>>y;
	adj[x].pb(y);
	adj[y].pb(x);
}
ll ans=-1,cans=0;
for(int i=1;i<=1e5;i++)
{
	s.clear();
	for(auto j:cadj[i])
	{
		for(auto h:adj[j])
			if(c[h]!=i)
				s.insert(c[h]);
	}
	if(s.size()>ans&&cadj[i].size()!=0)
	{
		ans=s.size();
		cans=i;
	}
}
cout<<cans<<endl;

	return 0;
           } 