#include "bits/stdc++.h"
using namespace std;
using ll = long long;

const int N = 2005;
vector< int> conn[N];
int res;
bitset< N> seen;


void dfs(int u, int d) {
	if(seen[u]) return;
	seen[u] = true;
	res = max(res, d);
	for(int v: conn[u]) dfs(v, d + 1);
}

int main() {
	int n; scanf("%d", &n);

	vector< int> vec;
	for(int i = 1; i <= n; ++i) {
		int a; scanf("%d", &a);
		if(a == -1) vec.emplace_back(i);
		else conn[a].emplace_back(i);
	}

	for(int x: vec) dfs(x, 1);
	printf("%d\n", res);
}
