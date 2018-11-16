#include <bits/stdc++.h>

using namespace std;

const int MAXN = (int) 1e4 + 5;

vector<int> g[MAXN];
int c[MAXN];
int res = 1;
int used[MAXN];

void dfs(int s, int col)
{
	used[s] = col;
	if (col != c[s])
	{
		used[s] = c[s];
		res++;
		for (int to : g[s])
		{
			if (!used[to])
			{
				dfs(to, c[s]);
			}
		}
	}
	else
	{
		for (int to : g[s])
		{
			if (!used[to])
			{
				dfs(to, col);
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i < n; ++i)
	{
		int p;
		scanf("%d", &p);
		g[i].push_back(p - 1);
		g[p - 1].push_back(i);
	}
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &c[i]);
	}
	dfs(0, c[0]);
	printf("%d", res);
}
