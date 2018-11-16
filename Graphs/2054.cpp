#include<iostream>
#include<vector>

using namespace std;

int *cat;
int m;

class Graph
{
	public:
		int n;
		bool *visited;
		vector<int> *adj;
		Graph(int);
		void addEdge(int, int);
		void dfs(int, int, int*);
};

Graph::Graph(int v)
{
	n = v;
	adj = new vector<int>[n+1];
	visited = new bool[n+1];
	for(int i=1;i<=n;i++)
	{
		visited[i] = false;
	}
}

void Graph::addEdge(int x, int y)
{
	adj[x].push_back(y);
	adj[y].push_back(x);
	return;
}

void Graph::dfs(int a, int c,int* count)
{	
	visited[a] = true;
	if(c>m)
	{
		return;
	}
	if(adj[a].size() == 0 || (adj[a].size() == 1 && a!=1))
	{
		if(c<=m)
		{
			(*count)++;
			return;
		}
	}
	for(int i=0;i<adj[a].size();i++)
	{
		if(visited[adj[a][i]] == true)
		{
			continue;
		}
		if(cat[adj[a][i]] == 1)
		{
			dfs(adj[a][i],(c+1),count);
		}
		else
		{
			dfs(adj[a][i],0,count);
		}
	}
	return;
}

int main()
{
	int n;
	cin>>n>>m;
	cat = new int[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>cat[i];		
	}
	Graph G(n);
	int x, y;
	for(int i=0;i<n-1;i++)
	{
		cin>>x>>y;
		G.addEdge(x,y);
	}
	int count = 0;
	G.dfs(1,cat[1],&count);
	cout<<count<<endl;
	return 0;
}