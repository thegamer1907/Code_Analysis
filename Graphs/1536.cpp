#include <iostream>
#include <vector>
#include <cstdio>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

struct Node
{
	char color = 'w';
	vector<int> edges;
};

int n, t;
vector<Node> adj;

void DFS(int start)
{
	adj[start].color = 'g';

	for (auto i : adj[start].edges)
	{
		if (adj[i].color == 'w')
			DFS(i);
	}

	adj[start].color = 'b';
}

int main()
{
	cin >> n >> t;
	adj.resize(n);

	for (int i = 0; i < n-1; i++)
	{
		int a;
		cin >> a;
		adj[i].edges.push_back(i + a);
	}
	DFS(0);
	if (adj[t - 1].color == 'w')
		cout << "NO";
	else
		cout << "YES";
	return 0;
}