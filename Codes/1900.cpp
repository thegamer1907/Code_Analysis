#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
#include <cstring>
#include <map>
// DON'T DIVIDE
// Greedy, Prefix, Sets/Bsearch, Dfs/bfs, DP
using namespace std;

long long n, k;
const int MAXN = 200005;
long long a[MAXN];
map<long long, long long> p, s;

int main()
{
	ios::sync_with_stdio(0);
	cin >> n >> k;

	long long ans = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		s[a[i]]++;
	}

	for(int i = 1; i <= n; i++)
	{
		s[a[i]]--;
		if(a[i] % k == 0)
			ans += p[a[i] / k] * s[a[i] * k];
		p[a[i]]++;
	}

	cout << ans << "\n";

	return 0;
}