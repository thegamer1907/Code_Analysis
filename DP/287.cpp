#include <iostream>
#include <limits.h>
#include <string.h>
#include <queue>
using namespace std;
 
 const int INF = 2e9 + 5;

 struct edge{
	int to, flow;
	int rev; //index of this edge in graph[to]
	edge (int to, int flow, int rev) : to(to), flow(flow), rev(rev){ }
 };

int bfs(vector<vector<edge>> &graph, int s, int t, vector<int> &parent){
	fill(parent.begin(), parent.end(), -1);
	vector<int> mins(graph.size(), 0);
	queue <int> q;
	q.push(s);
	mins[s] = INF;
	parent[s] = -2; //special parent
	while (!q.empty()){
		int u = q.front(); q.pop();
		for(edge &e : graph[u])
			if(e.flow > 0 && parent[e.to] == -1){
				q.push(e.to);
				mins[e.to] = min(mins[u], e.flow);
				parent[e.to] = u;
			}
	}
	return mins[t];
}
 
int edmond_karp(vector<vector<edge>> &graph, int s, int t){
	vector<int> parent(graph.size()); // to track path
	int max_flow = 0;
	int flow;
	while (flow = bfs(graph, s, t, parent)){
		// backtrack the path
		for(int curr = t, next = parent[t]; next >= 0; curr = next, next = parent[curr]){
			//find and update edge + reverse edge
			for(edge &e : graph[curr]){
				if(e.to != next) continue;
				//we are doing things in the reverse way damn
				e.flow += flow;
				graph[e.to][e.rev].flow -= flow; //tricky
				//but essentially getting back to the used edge to update it
			}
		}
		max_flow += flow;
	}
	return max_flow;
}

void add_edge(vector<vector<edge>> &g, int a, int b, int c){
	g[a].push_back(edge(b, c, g[b].size()));
	g[b].push_back(edge(a, 0, g[a].size() - 1));
}

using vi = vector<int>;

int main(){
	cin.tie(0), cin.sync_with_stdio(0);
	
	int n; cin >> n;
	vi a(n);
	for(int &i : a)
		cin >> i;
	
	int m; cin >> m;
	vi b(m);
	for(int &i : b)
		cin >> i;

	int size = 1 + n + m + 1;
	vector<vector<edge>> g(size);

	// connect source to boys
	for(int i = 1; i <= n; i++)
		add_edge(g, 0, i, 1); // capacity 1

	// connect girls to sink
	for(int i = n + 1; i <= n + m; i++)
		add_edge(g, i, size-1, 1);

	// connect boys with girls
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			if(abs(a[i] - b[j]) <= 1)
				add_edge(g, i+1, j+n+1, 1);

	// // print
	// for(int i = 0; i < g.size(); i++){
	// 	cout << i << ": ";
	// 	for(auto &x : g[i])
	// 		cout << x.to << ' ';
	// 	cout << '\n';
	// }

	cout << edmond_karp(g, 0, size - 1);

	return cout << '\n', 0;
}