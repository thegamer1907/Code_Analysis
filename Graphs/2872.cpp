/*
n: number of nodes on left side, nodes are numbered 1 to n
m: number of nodes on right side, nodes are numbered n+1 to n+m
G = NIL[0] ? G1[G[1---n]] ? G2[G[n+1---n+m]]
*/
#include <bits/stdc++.h>
using namespace std;
#define MAXN 300005
#define INF 10000000
#define NIL 0
vector < int > G[MAXN];
int match[MAXN] , dist[MAXN];
int n ,  m ;

bool bfs() {
	int i, u;
	queue< int > Q;
	for(i=1; i<=n; i++) {
		if(match[i]==NIL) {
			dist[i] = 0;
			Q.push(i);
		}
		else dist[i] = INF;
	}
	dist[NIL] = INF;
	while(!Q.empty()) {
		u = Q.front(); Q.pop();
		if(u!=NIL) {
			for(auto v : G[u]) {
				if(dist[match[v]]==INF) {
					dist[match[v]] = dist[u] + 1;
					Q.push(match[v]);
				}
			}
		}
	}
	return (dist[NIL]!=INF);
}

bool dfs(int u) {

	if(u!=NIL) {
		for(auto v : G[u]) {
			if(dist[match[v]]==dist[u]+1) {
				if(dfs(match[v])) {
					match[v] = u;
					match[u] = v;
					return true;
				}
			}
		}
		dist[u] = INF;
		return false;
	}
	return true;
}

int hopcroft_karp() {
	int matching = 0, i;
	memset(match,0,sizeof(match));
	while(bfs())
		for(i=1; i<=n; i++)
			if(match[i]==NIL && dfs(i))
				matching++;
	return matching;
}
int main()
{
	cin >> m >> n;
	for(int i =0 ; i < n;i++){
		int x , y ;
		cin >> x >>y;
		G[i+1].push_back(x+n);
		G[i+1].push_back(y+n);
	}
	cout << m - hopcroft_karp()<<endl;
	return 0;
}
