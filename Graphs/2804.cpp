#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
#define pil pair<int,ll>
#define pli pair<ll,int>
#define pii pair<int,int>
#define mk make_pair
#define pb push_back
#define eps 1e-12
#define sd(x) scanf("%d",&x)
#define sdl(x) scanf("%lld",&x)
#define pd(x) printf("%d\n",x)
#define pdl(x) printf("%lld\n",x)
#define MAXN 200009
using namespace std;
vector<int> g[MAXN];
int c[MAXN];
set<int> col[MAXN];
int main()
{
	int n,m;
	sd(n);
	sd(m);
	int fans=1e6;
	for(int i=1;i<=n;i++)
	{
		sd(c[i]);
		fans=min(fans,c[i]);
	}
	for(int i=0;i<m;i++)
	{
		int x,y;
		sd(x);
		sd(y);
		g[x].pb(y);
		g[y].pb(x);
	}
	for(int i=1;i<=n;i++)
	{
		int id=c[i];
		for(int j=0;j<g[i].size();j++)
		{
			if(c[g[i][j]]!=id)
			{
				col[id].insert(c[g[i][j]]);
			}
		}
	}
	int maxx=-1,maxid=-1;
	for(int i=1;i<=100000;i++)
	{
		int sz=col[i].size();
		if(maxx<sz)
		{
			maxx=sz;
			maxid=i;
		}
	}
	if(maxx==0)
	{
		maxid=fans;
	}
	pd(maxid);
	return 0;
}