#include<bits/stdc++.h>
using namespace std;

const int f_idx = 1;
int n, m;
int c, cc;//cc = consecutive cats; c = total count
vector<int> *G;
int cat[100001];
bool NOTvisited[100001], blocked[100001];
void calculate_cats(int node, int cat[]);
void DFS(int node);
void ALL_DFS(int source, int cat[]);
void fill();

int main()
{
	c = cc = 0;
	cin >> n >> m;
	G = new vector<int>[n + f_idx];
	for (int i = 1; i <= n; i++)
	{
		NOTvisited[i] = true;
		blocked[i] = false;
		cin >> cat[i];
	}
	fill();
	vector<int> v;
	ALL_DFS(1, cat);
	cout << c;
}

void fill()
{
	int a, b;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> a >> b;
		G[a].push_back(b);
		if (a == b)
			continue;
		G[b].push_back(a);

	}
}

void ALL_DFS(int source, int cat[])
{
	NOTvisited[source] = false;
	calculate_cats(1, cat);
	DFS(source);
}

void DFS(int node)
{

	for (int i = 0; i < G[node].size(); i++)
	{
		if (!NOTvisited[G[node][i]])
		{
			if (cat[G[node][i]] > m || (blocked[node] && node != 1))
			{
				blocked[G[node][i]] = true;
			}
			NOTvisited[G[node][i]] = true;
			DFS(G[node][i]);
		}
	}

	if (G[node].size() == 1 && node != 1)
	{
	    if(!blocked[node])
		    c++;
	}
}

void calculate_cats(int node, int cat[])
{
	for (int i = 0; i < G[node].size(); i++)
	{
		if (NOTvisited[G[node][i]])
		{
			if (cat[G[node][i]])
			{
				cat[G[node][i]] += cat[node];
				cc = cat[G[node][i]];
			}
			else
				cc = 0;
			NOTvisited[G[node][i]] = false;
			calculate_cats(G[node][i], cat);
		}
	}
}