#include <bits/stdc++.h>
#pragma comment(linker, "/STACK:1024000000,1024000000")
#define mem(a,b) memset((a),(b),sizeof(a))
#define MP make_pair
#define pb push_back
#define fi first
#define se second
#define sz(x) (int)x.size()
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
vector<int> mp[3];
char s[MAX];
int main()
{
	int n,k,i,j,x,ans,l,now;
	while(~scanf("%d%d",&n,&k))
	{
		scanf("%s",s+1);
		mp[0].clear();
		mp[1].clear();
		for(i=1;i<=n;i++)
		{
			mp[s[i]-'a'].pb(i);
		}
		ans=1;
		for(i=0;i<2;i++)
		{
			if(!sz(mp[i])) continue;
			l=0;
			now=0;
			for(j=1;j<sz(mp[i]);j++)
			{
				now+=mp[i][j]-mp[i][j-1]-1;
				while(now>k&&l<=j)
				{
					now-=mp[i][l+1]-mp[i][l]-1;
					l++;
				}
				ans=max(ans,mp[i][j]-mp[i][l]+1+min(k-now,n-mp[i][j]+mp[i][l]-1));
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
/*
3 1
aab
*/