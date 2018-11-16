#include<iostream>
#include<vector>
using namespace std;
void dfs(int start, vector<int> & g, vector<bool> & used) {
	used[start] = true;
	if (!used[g[start]])
		dfs(g[start], g, used);
	return;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//
	int n, fin;
	cin >> n >> fin;
	--fin;
	vector<bool> used(n); vector<int> g(n);
	for (int i = 0; i < n - 1; ++i) {
		int elem;
		cin >> elem;
		g[i] = elem + i;
	}
	//
	dfs(0, g, used);
	if (used[fin])
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	//system("pause");
	return 0;
}