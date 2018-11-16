#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int bp(int a, int b) {
	int res = 1;
	while (b)
	{
		if (b & 1)res *= a;
		a *= a;
		a %= 10;
		res %= 10;
		b >>= 1;
	}
	return res;
}

int cat[1000001], k;

vector<vector<int> > gr;

int dfs(int v, int cats = 0, int p = -1) {
	int ans = 0; bool leaf = true;
	cats = (cats + cat[v])*cat[v];
	//cout << "DFS: " << cats << ' ' << v << endl;
	if (cats > k) return 0;
	for (int i = 0;i < gr[v].size();++i) {
		int to = gr[v][i];
		if (to != p){
			ans += dfs(to, cats, v);
			leaf = false;
		}
	}
	if(leaf) ++ans;
	return ans;
}

int main() {

	int n, x, y;
	cin >> n >> k;
	gr.assign(n + 1, vector<int>());
	for (int i = 1;i <= n;++i) {
		cin >> cat[i];
	}
	for (int i = 0;i + 1 < n;++i) {
		cin >> x >> y;
		gr[x].push_back(y);
		gr[y].push_back(x);
	}

	cout << dfs(1);

	return 0;
}