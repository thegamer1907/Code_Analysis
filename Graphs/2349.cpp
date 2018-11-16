#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef vector<pii> vii;
#define MOD 1000000007
#define INF 1000000000
#define mp make_pair
#define pb push_back
#define ss second
#define ff first
#define endl '\n'
#define pl cout<<endl;
ll maxi=LLONG_MIN;
ll mini=LLONG_MAX;
void fast() { ios_base::sync_with_stdio(false); cin.tie(NULL); }
ll t,i,j,k,n,temp,flag,ans,m,c=0;
ll s;
vl g[20005];
ll vis[20005]={0};
ll bfs(ll s)
{
	ll maxi=0;
	queue<pair<ll,ll> > q;
	q.push(mp(s,0));
	vis[s]=1;
	while(!q.empty())
	{
		ll u=q.front().ff;
		ll l=q.front().ss;
		q.pop();
		maxi=max(maxi,l);
		for(auto v:g[u])
		{
			if(!vis[v])
			{
				vis[v]=1;
				q.push(mp(v,l+1));
			}
		}
	}
	c=max(maxi,c);	
}
int main() {

	#ifndef ONLINE_JUDGE
	freopen("F:\\Codes\\in.txt", "r", stdin);
	freopen("F:\\Codes\\out.txt", "w", stdout);
	#endif
	
	cin>>n;
	ll p[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>p[i];	
		if(p[i]!=-1)
		{
			g[p[i]].pb(i);
		}
	}
	for(i=1;i<=n;i++)
	{
		if(p[i]==-1)
			bfs(i);
	}		
	cout<<c+1;
	return 0;
}