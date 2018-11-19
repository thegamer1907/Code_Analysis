#include <bits/stdc++.h>
#define mem(a,b) memset((a),(b),sizeof(a))
#define MP make_pair
#define pb push_back
#define fi first
#define se second
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
using namespace std;
#define  _GLIBCXX_PERMIT_BACKWARD_HASH
#include <ext/hash_map>
using namespace __gnu_cxx;
struct str_hash{size_t operator()(const string& str)const{return __stl_hash_string(str.c_str());}};
typedef long long ll;
const int INF=0x3f3f3f3f;
const ll LLINF=0x3f3f3f3f3f3f3f3f;
const double PI=acos(-1.0);
const double eps=1e-6;
const int MAX=1e5+10;
const ll mod=1e9+7;
int a[MAX][5],flag,t[55],cnt,k;
map<int,int> mp;
map<int,int> ::iterator it;
bool check(int x)
{
	while(x)
	{
		if(x%10==2) return 0;
		x/=10;
	}
	return 1;
}
void dfs(int x,int now)
{
	int i;
	if(x==k)
	{
		if(flag) return;
		for(i=0;i<cnt;i++)
		{
			if(check(t[i]+now))
			{
				if(mp[t[i]]&&mp[now]) flag=1;
			}
		}
		return;
	}
	dfs(x+1,now*10);
	dfs(x+1,now*10+1);
}
void dfst(int x,int now)
{
	if(x==k)
	{
		t[cnt++]=now;
		return;
	}
	dfst(x+1,now*10);
	dfst(x+1,now*10+1);
}
int main()
{
	int n,i,j;
	while(~scanf("%d%d",&n,&k))
	{
		cnt=0;
		dfst(0,0);
		mp.clear();
		for(i=0;i<n;i++)
		{
			int temp=0;
			for(j=0;j<k;j++)
			{
				scanf("%d",&a[i][j]);
				temp=temp*10+a[i][j];
			}
			mp[temp]++;
		}
		flag=0;
		dfs(0,0);
		if(flag) puts("YES");
		else puts("NO");
	}
	return 0;
}
