#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
#include<math.h>
#include<map>


using namespace std;

long long int tmp,n,ans=0;
vector<vector<int>> graph;
vector<bool> check;

void dfs(int x)
{
	check[x] = 1;
	for (int i = 0; i < graph[x].size(); i++)
	{
		if (check[graph[x][i]] == 0) dfs(graph[x][i]);
	}
}

int main() {
	cin >> n;
	graph.resize(n+1);
	check.resize(n + 1, 0);
	for (int i = 1; i <= n; i++)
	{
		cin >> tmp;
		graph[i].push_back(tmp);
		graph[tmp].push_back(i);
	}
	for(int i=1;i<=n;i++)
	{
		if (check[i] == 0)
		{
			ans++;
			dfs(i);
		}
	}
	cout << ans;
	return 0;
}