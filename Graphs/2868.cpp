#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
#include <stack>
#include <queue>
#include <set>
#include <list>
#include <bitset>
#include <array>

using namespace std;

#define fi first	
#define se second
#define long long long
typedef pair<int,int> ii;

bool visited[100003];
vector<int> vec[100003];

int se, sn;
void dfs(int u)
{
	sn++;
	se += vec[u].size();
	visited[u] = 1;
	for(int v : vec[u])
		if(!visited[v])
			dfs(v);
}

int main()
{
	// ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("input.in", "r", stdin);

	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= m; i++)
	{
		int u, v;
		scanf("%d %d", &u, &v);
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	int res = 0;
	for(int i = 1; i <= n; i++)
	{
		if(!visited[i])
		{
			se = sn = 0;
			dfs(i);
			se /= 2;
			if(se == sn-1)
				res++;
		}
	}
	printf("%d\n", res);
}









