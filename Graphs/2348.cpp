#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 2020;

int N, res;

vector<int> go;
vector<int> graph[MAXN];

int dfs( int node ){

	int mx = 0;

	for( auto adj : graph[node] )
		mx = max(mx, dfs(adj));
	
	return mx + 1;
}

int main(){

	scanf("%d", &N);

	for( int p, i=1 ; i<=N ; i++ ){

		scanf("%d", &p);

		if( p != -1 )
			graph[p].push_back(i);
		else
			go.push_back(i);
	}

	for( auto node : go )
		res = max(res, dfs(node));

	printf("%d\n", res);
	return 0;
}