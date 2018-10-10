#include <bits/stdc++.h>
#pragma comment(linker, "/STACK:1024000000,1024000000")
#define mem(a,b) memset((a),(b),sizeof(a))
#define MP make_pair
#define pb push_back
#define fi first
#define se second
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
using namespace std;
#define _GLIBCXX_PERMIT_BACKWARD_HASH
#include <ext/hash_map>
using namespace __gnu_cxx;
struct str_hash{size_t operator()(const string& str)const{return __stl_hash_string(str.c_str());}};
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int,int>
#define PLL pair<ll,ll>
#define PDD pair<double,double>
const int INF=0x3f3f3f3f;
const ll LLINF=0x3f3f3f3f3f3f3f3f;
const double PI=acos(-1.0);
const double eps=1e-8;
const int MAX=1e5+10;
const ll mod=1e9+7;
vector<int> mp[MAX],res;
int main()
{
	int n,m,i,j,x,q,l,r,pre,k;
	while(~scanf("%d%d",&n,&m))
	{
		for(i=1;i<=n;i++) mp[i].clear();
		res.clear();
		res.resize(n+1);
		for(i=1;i<=n;i++)
		{
			mp[i].pb(INF);
			res[i]=i;
			for(j=1;j<=m;j++)
			{
				scanf("%d",&x);
				mp[i].pb(x);
			}
			mp[i].resize(m+1);
		}
		for(j=1;j<=m;j++)
		{
			pre=0;
			l=r=1;
			for(i=1;i<=n;i++)
			{
				if(!pre)
				{
					pre=mp[i][j];
					continue;
				}
				if(mp[i][j]>=pre) r++;
				else
				{
					for(k=l;k<=r;k++) res[k]=max(res[k],r);
					l=r=i;
				}
				pre=mp[i][j];
			}
			if(r-l) for(k=l;k<=r;k++) res[k]=max(res[k],r);
		}
		scanf("%d",&q);
		while(q--)
		{
			scanf("%d%d",&l,&r);
			if(res[l]>=r) puts("Yes");
			else puts("No");
		}
	}
	return 0;
}