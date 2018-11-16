#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>graph;
vector<bool>v;
bool  stop = 0;
void dfs(int node ,int m)
{
	v[node] = 1;
	if (node == m&&!stop)
	   stop=1;
	for (int i = 0; i < graph[node].size(); i++)
	{
		int child = graph[node][i];
		if (!v[child])
		{
				dfs(child, m);
		}

	}
}
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int n,m,z;
	cin >> n >> m;
	graph.resize(n + 1);
	v.resize(n + 1);
	vector<int>vec;

	for (int i = 1; i <= n-1&&cin>>z; i++)
	{
	
		graph[i].push_back(z+i);
		
	
	}

		
		dfs(1,m);
		

	
	(stop) ? cout << "YES" : cout << "NO";

	
	return 0;
}


