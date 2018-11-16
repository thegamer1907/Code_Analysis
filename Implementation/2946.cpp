#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <cstring>
#include <cstdio>
// DON'T DIVIDE
// Greedy, Prefix, Sets/Bsearch, Dfs/bfs, DP
// Stack, Bitmask, Dsu 
using namespace std;

int n, q;
const int MAXN = 100005;
int occ[MAXN];

int main()
{
	ios::sync_with_stdio(0);
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		occ[x]++;
	}

	for(int i = 1; i < MAXN; i++)
		occ[i] += occ[i - 1];

	cin >> q;
	for(int i = 0; i < q; i++)
	{
		int m;
		cin >> m;
		if(m > 100000)
			m = 100000;
		cout << occ[m] << "\n";
	}

	return 0;
}
