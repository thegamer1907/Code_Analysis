    #include <iostream>
    #include <string>
    #include <set>  
    #include <stack>
    #include <algorithm>
    #include <vector>
    #include <cmath>
    #include <queue>
    #include <deque>
    #include <cstring>
    #include <cstdio>
    #include <map>
    #include <numeric>
    #include <cassert>
    #include <iomanip>
    #include <sstream>
    #include <ctime>
    #include <bitset> 
    #include <unordered_map>
using namespace std;
#define for1(i,a,b) for(int i=(a);i<(int)(b);++i)
#define rep(i,maxn) for1(i,0,maxn)
#define ford(i,b,a) for(int i=(int)(b)-1;i>=a;--i)
typedef long long ll;
typedef unsigned long long int128;
typedef pair<int,int> pii;
typedef pair<int,pii > piii;
#define inf 0x3f3f3f3f
#define linf 0x3f3f3f3f3f3f3f3f
#define mod1 1000000007
#define mod2 998244353
#define eps 1e-10
#define pi acos(-1)
#define st first
#define nd second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define dprintf(...) printf(__VA_ARGS__)
#define lson(x) ((x)<<1)
#define rson(x) ((x)<<1^1)
const int maxn=30007;
int n,t;
vector<int> g[maxn];
bool vis[maxn];
void dfs(int x)
{
	vis[x]=1;
	rep(i,g[x].size())
	{
		int to=g[x][i];
		if(!vis[to])dfs(to);
	}
}
int main()
{
	scanf("%d%d",&n,&t);
	for1(i,1,n)
	{
		int to;
		scanf("%d",&to);
		g[i].pb(i+to);
	}
	dfs(1);
	if(vis[t])printf("YES\n");
	else printf("NO\n");
	return 0;
}