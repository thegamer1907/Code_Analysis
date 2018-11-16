#include<bits/stdc++.h>
using namespace std;

#define pb push_back

class Graph{
	int V;
	list<int> *adj;
	bool *visited;
public:
	Graph(int v);
	void addEdge(int v, int w);
	bool DFS(int v, int dest);
	
	void print(){
		for(int i = 0; i < V; i++) {
			cout << i;
			for(auto j : adj[i]) cout << "->"  << j;
			cout << endl;
		}
	}
};

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, dest;
	cin >> n >> dest;
	Graph g(n);
	
	for(int i = 1; i < n; i++){
		int a;
		cin >> a;
		g.addEdge(i, i + a);
	}
	
	cout << (g.DFS(1, dest)?"YES\n":"NO\n");
}

Graph::Graph(int v){
	this->V = v;
	adj = new list<int>[v + 1];
	visited = new bool[v + 1];
	for(int i = 0; i < v; i++) visited[i] = false;
}

void Graph::addEdge(int v, int w){ adj[v].pb(w); }

bool Graph::DFS(int v, int dest){

	visited[v] = true;
	
	for(auto i : adj[v]){
		if(!visited[i]) return DFS(i, dest);
	}
	
	if(visited[dest]) return true;
	else return false;
}
