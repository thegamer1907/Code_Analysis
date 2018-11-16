#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int n,temp,c[100005];
vector <int> g[100005];

int df (int node, int par, int col) {
	int ret = 0, ex = 0;
	if (c[node] != col) ex = 1;
	for (int i = 0 ; i < g[node].size() ; i++) {
		if (par != g[node][i]) ret += (df (g[node][i], node, c[node]));
	}
	return ret + ex;
}

int main () {
	cin >> n;
	for (int i = 2 ; i <= n ; i++) {
		cin >> temp;
		g[i].pb (temp);
		g[temp].pb (i);
	}
	for (int i = 1 ; i <= n ; i++) cin >> c[i];
	cout << df (1, -1, -1) << endl;
	return 0;
}
