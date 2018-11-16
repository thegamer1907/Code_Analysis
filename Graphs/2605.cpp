#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int res = 1;
int color[10003];
vector<int> vec[10003];

void dfs(int now)
{
	for(int i = 0; i < vec[now].size(); i++)
	{
		int v = vec[now][i];
		if(color[now] != color[v])
			res++;
		dfs(v);
	}
}

int main()
{
	//freopen("input.in", "r", stdin);
	int n; cin >> n;
	for(int i = 2 ; i <= n; i++)
	{
		int x; cin >> x;
		vec[x].push_back(i);
	}
	for(int i = 1; i <= n; i++)
	{
		cin >> color[i];
	}
	dfs(1);
	cout << res << "\n";
}