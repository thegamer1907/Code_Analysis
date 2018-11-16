#include <bits/stdc++.h>
using namespace std;
 
// solution of a dumb, easy problem using maxflow
// to test scaling dinic implementation

using vi = vector<int>;
using vvi = vector<vi>;
const int INF = 2e9 + 5; // il maggico

// We represent the graph as an adiacency list of edge list indexes

struct edge{
	int from, to; // the connected nodes
	int f; // the flow we can still push
};

using graph = vvi;
using edge_list = vector<edge>;

// Also, we use i^1 to get back-edge of i-th edge

constexpr int back_edge(int i){ return i ^ 1;}

// Assumes directed edges
const bool IS_DIRECTED = 1;

void add_edge(graph &g, edge_list &e, int a, int b, int c, bool directed = IS_DIRECTED){
	// index of current edge
	int index = e.size();
	// updates adjiacency list
	g[a].push_back(index);
	g[b].push_back(back_edge(index));
	// create edges
	e.push_back({a, b, c});
	// for back edge, checks if directed or undirected edge
	e.push_back({b, a, directed ? 0 : c});
}

// recursive dfs that finds and adds a blocking flow
// following level graph, from source to sink,
// with flow == lim

int level_dfs(graph &g, edge_list &el, vi &level, int source, int sink, int lim){
	// if we can return flow
	if(source == sink) return lim;
	// we try each edge
	for(int &i : g[source]){
		edge &e = el[i];
		// follows level graph && enough flow can be sent
		if(level[e.to] == level[source] + 1 && e.f >= lim){
			int pushed = level_dfs(g, el, level, e.to, sink, lim);
			// if we could push flow
			if(pushed > 0){
				// update edge and back edge
				el[i].f -= pushed;
				el[back_edge(i)].f += pushed;
				// return to avoid more pushes
				return pushed;
			}
		}
	}
	// couldn't push flow
	return 0;
}

// bfs that builds the level graph and return 
// if it's possible to respect some given limits

int level_bfs(graph &g, edge_list &el, vi &level, int source, int sink, int lim){
	// resets level graph
	fill(level.begin(), level.end(), INF);
	// source is level[0]
	level[source] = 0;
	// being bfs from source
	queue<int> q;
	q.push(source);
	
	//TODO: try if following version is faster, as it's
	// not needed to look further when sink is found
	//!q.empty() && level[sink] == INF

	while(!q.empty()){
		// current node
		int curr = q.front(); q.pop();
		// try all edges
		for(int &i : g[curr]){
			// current edge
			edge &e = el[i];
			// if edge is worthy and leads to unvisited
			if(e.f >= lim && level[e.to] == INF){
				// updates level and adds to queue
				level[e.to] = level[curr] + 1;
				q.push(e.to);
			}
		}
	}
	// return true if sink was reached
	return level[sink] != INF;
}

int scaling_dinic(graph &g, edge_list &el, int source, int sink){
	// Scaling part: we try starting from big to small values
	// Vector used for level graph
	vi level(g.size());
	// TODO: check for long long
	int flow = 0;
	// TODO: opt to actually look for smallest pow of 2 that's ok
	for(int lim = 1<<30; lim > 0; /*lim >>= 1*/){
		// if we can't send enough flow
		if(!level_bfs(g, el, level, source, sink, lim)){
			lim >>= 1;
			continue;
		}
		// we send all flow that's possible
		while(level_dfs(g, el, level, source, sink, lim)){
			flow += lim;
		}
	}
	// returns the found flow
	return flow;
}

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
	graph g(size);
	edge_list el;

	// connect source to boys
	for(int i = 1; i <= n; i++)
		add_edge(g, el, 0, i, 1); // capacity 1

	// connect girls to sink
	for(int i = n + 1; i <= n + m; i++)
		add_edge(g, el, i, size-1, 1);

	// connect boys with girls
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			if(abs(a[i] - b[j]) <= 1)
				add_edge(g, el, i+1, j+n+1, 1);

	// // print
	// for(int i = 0; i < g.size(); i++){
	// 	cout << i << ": ";
	// 	for(auto &x : g[i])
	// 		cout << x.to << ' ';
	// 	cout << '\n';
	// }

	cout << scaling_dinic(g, el, 0, size - 1);

	return cout << '\n', 0;
}