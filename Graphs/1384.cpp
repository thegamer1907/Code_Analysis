#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <string>
#include <cmath>
#include <functional>
#include <algorithm>
#include <utility>
#include <stack>
using namespace std;
vector<int> gr;
void dfs(int a, int n,int t)
{
	if (a == n)
	{
		cout << "NO";
		exit(0);
	}
	if (gr[a] + 1 + a == t)
	{
		cout << "YES";
		exit(0);
	}
	else
	dfs(gr[a] + a,n, t);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int m, k; cin >> m >> k;
	gr.resize(m - 1);
	for (int i = 0; i < m-1; i++) cin >> gr[i];
	dfs(0, m-1, k);
	cout << "NO";
	return 0;
}