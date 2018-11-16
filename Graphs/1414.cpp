#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4")
 
 
#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <cassert>
#include <iomanip>
#include <cstdio>
#include <queue>
#include <set>
#include <map>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
//#include <unordered_map>
#include <numeric>
 
using namespace std;
 
const int mod = 1e9 + 7;

const int N = 3e5;

int n, t;
vector <int> g[42345];
bool used[42345];
void dfs(int u) {
	used[u] = 1;
	for(int i = 0; i < g[u].size(); i++) if(!used[g[u][i]]) dfs(g[u][i]);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin >> n >> t;
	for(int i = 1; i < n; i++) {
		int x;
		cin >> x;
		g[i].push_back(i + x);
	}
	dfs(1);
	cout << (used[t] ? "YES" : "NO");
}

