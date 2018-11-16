#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
#include <cstring>
// DON'T DIVIDE
// Greedy, Prefix, Sets/Bsearch, Dfs/bfs, DP
using namespace std;

int n, m;
const int MAXN = 100005;
int col[MAXN];
vector<int> adj[MAXN];
set<int> poss[MAXN];
bool vis[MAXN];

void dfs(int idx)
{
	vis[idx] = true;
	for(int i = 0; i < adj[idx].size(); i++)
		if(!vis[adj[idx][i]])
		{
			if(col[adj[idx][i]] != col[idx])
			{
				poss[col[idx]].insert(col[adj[idx][i]]);
				poss[col[adj[idx][i]]].insert(col[idx]);
			}
			dfs(adj[idx][i]);
		}
}

int main()
{
	ios::sync_with_stdio(0);
	cin >> n >> m;

	int small = MAXN;
	for(int i = 1; i <= n; i++)
	{
		cin >> col[i];
		small = min(small, col[i]);
	}
	for(int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		if(col[a] != col[b])
		{
			poss[col[a]].insert(col[b]);
			poss[col[b]].insert(col[a]);
		}
	}

	int ans = small, s = 0;
	for(int i = 1; i < MAXN; i++)
		if(poss[i].size() > s)
		{
			s = poss[i].size();
			ans = i;
		}

	cout << ans << "\n";
	return 0;
}