#include <bits/stdc++.h>
#define N 2500
using namespace std;

int n, deep[N], pai[N], ans;

vector<int> grafo[N];

void dfs(int x, int p)
{
	for(auto v: grafo[x])
	{
		if(v == p) continue;

		deep[v] = deep[x] + 1;

		dfs(v, x);
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);

	cin>>n;

	for(int i = 1; i <= n; i++)
	{
		cin>>pai[i];

		if(pai[i] != -1) grafo[i].push_back(pai[i]), grafo[pai[i]].push_back(i);
	}

	for(int i = 1; i <= n; i++)
	{
		if(pai[i] == -1) dfs(i, i);
	}

	for(int i = 1; i <= n; i++) ans = max(ans, deep[i] + 1);

	cout<<ans<<"\n";
}