#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
#include <cstring>
// DON'T DIVIDE
// Greedy, Prefix, Sets/Bsearch, Dfs/bfs, DP
using namespace std;

int n;
const int MAXN = 105;
int a[MAXN];

int main()
{
	ios::sync_with_stdio(0);
	cin >> n;

	int big = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		big = max(a[i], big);
	}

	int total = 0;
	for(int i = 0; i < n; i++)
		total += big - a[i];

	cout << total << "\n";
	return 0;
}