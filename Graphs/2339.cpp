#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <string>
#include <iomanip>
#include <memory.h>
using namespace std;
#define ll long long
int n, v;
vector<vector<int>> graph;
vector<int> vis;
int maxN = 0;
void dfs(int s , int lvl = 1)
{
	maxN = max(maxN, lvl);
	//vis[s] = 1;
	for (int i = 0; i < graph[s].size(); i++)
	{
		int u = graph[s][i];
		/*if (!vis[u])*/ dfs(u, lvl + 1);
	}
}
int main()
{
	cin >> n;
	graph.resize(n);
	vis.resize(n);
	for (int i = 0; i < n; i++)
	{
		int q;
		scanf("%d", &q);
		if (q == -1) continue;
		q--;
		graph[q].push_back(i);
	}
	for (int i = 0; i < n; i++)
		/*if (!vis[i])*/ dfs(i);
	cout << maxN;
	return 0;
}

