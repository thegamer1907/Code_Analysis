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

int n;
const int MAXN = 10000005, MOD = 1e9 + 7; 
long long dp[4];

int main()
{
	ios::sync_with_stdio(0);
	cin >> n;

	dp[3] = 1;
	for(int i = 1; i <= n; i++)
	{
		long long total = 0;
		for(int j = 0; j < 4; j++)
			total = (total + dp[j]) % MOD;
		for(int j = 0; j < 4; j++)
			dp[j] = (total - dp[j] + MOD) % MOD;
	}

	cout << dp[3] << "\n";
	return 0;
}
