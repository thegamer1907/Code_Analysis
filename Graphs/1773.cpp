#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string.h>
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%I64d",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define INF                         (int)1e9
#define EPS                         1e-9
#define bitcount                    __builtin_popcount
#define gcd                         __gcd
#define forall(i,a,b)               for(int i=a;i<b;i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a)                      a.begin(), a.end()
#define in(a,b)                     ( (b).find(a) != (b).end())
#define pb                          push_back
#define fill(a,v)                    memset(a, v, sizeof a)
#define sz(a)                       ((int)(a.size()))
#define mp                          make_pair
#define MOD                         1000000007

using namespace std;
vector<int> g[30001];
int n,t,flag = 0;
void dfs(int root)
{
	if(root == t)
	{
		flag = 1;
		return;
	}
	for(int i=0;i<g[root].size();i++)
	{
		dfs(g[root][i]);
	}
}
int main()
{
	scanf("%d %d",&n,&t);
	for(int i=1;i<=n-1;i++)
	{
		int x;
		scanf("%d",&x);
		g[i].push_back(i+x);
	}
	dfs(1);
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}

