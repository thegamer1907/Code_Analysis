#include <bits/stdc++.h>
using namespace std;

#define FR(i, a, b) for(int i = a; i < b; i ++)
#define PB push_back

typedef long long ll;

const int N = 100 * 1000 + 10, INF = 1000 * 1000 * 1000 + 13;
ll c[N], mn;
ll ans = 0;
bool mark[N];
vector <int> vec[N];

void dfs(int v)
{
	mn = min(c[v], mn);
	mark[v] = true;
	for(auto u: vec[v])
		if(!mark[u]) 
			dfs(u);
}

int main()
{
	int n, m;
	cin>> n >> m;
	FR(i, 0, n)
		cin>> c[i];
	FR(i, 0, m)
	{
		int a, b;
		cin>> a >> b;
		a--, b--;
		vec[a].PB(b);
		vec[b].PB(a);
	}

	FR(i, 0, n)
		if(!mark[i])
		{
			mn = INF;
			dfs(i);
			ans += mn;
		}
	cout<< ans << endl;
}
