#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <cstring>
#include <cstdio>
// DON'T DIVIDE
// Greedy, Prefix, Sets/Bsearch, Dfs/bfs, DP
// Stack, Bitmask, Dsu 
using namespace std;

int n;
const int MAXN = 100005;
long long a[MAXN];
vector<pair<int, int> > adj[MAXN];
long long d[MAXN], cnt[MAXN];
multiset<long long> curr;
long long ans = 0;

void dfs(int idx, int par, long long sum)
{
	d[idx] = sum;
	for(int i = 0; i < adj[idx].size(); i++)
		if(adj[idx][i].first != par)
		{
			dfs(adj[idx][i].first, idx, sum + adj[idx][i].second);
			cnt[idx] += cnt[adj[idx][i].first];
		}
	cnt[idx]++;
}

void dfs2(int idx, int par)
{
	if(!curr.empty())
	{
		long long dist = *curr.begin();
		if(dist < d[idx] - a[idx])
		{
			ans += cnt[idx];
			return;
		}
	}
	curr.insert(d[idx]);
	for(int i = 0; i < adj[idx].size(); i++)
		if(adj[idx][i].first != par)
			dfs2(adj[idx][i].first, idx);
	curr.erase(curr.find(d[idx]));
}

int main()
{
	ios::sync_with_stdio(0);
	cin >> n;

	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 1; i <= n - 1; i++)
	{
		int p, c;
		cin >> p >> c;
		adj[i + 1].push_back(make_pair(p, c));
		adj[p].push_back(make_pair(i + 1, c));
	}

	dfs(1, -1, 0);
	dfs2(1, -1);
	cout << ans << "\n";

	return 0;
}
