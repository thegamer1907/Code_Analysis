#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <cstring>
#include <stdio.h>
// DON'T DIVIDE
// Greedy, Prefix, Sets/Bsearch, Dfs/bfs, DP
// Stack, Bitmask, Dsu 
using namespace std;

long long n, m, k, x, s;
const int MAXN = 200005;
long long a[MAXN], b[MAXN], c[MAXN], d[MAXN];

int main()
{
	ios::sync_with_stdio(0);
	cin >> n >> m >> k >> x >> s;

	for(int i = 0; i < m; i++)
		cin >> a[i];
	for(int i = 0; i < m; i++)
		cin >> b[i];
	for(int i = 0; i < k; i++)
		cin >> c[i];
	for(int i = 0; i < k; i++)
		cin >> d[i];

	long long ans = x * n;
	for(int i = 0; i < m; i++)
	{
		long long left = s - b[i];
		int low = 0, high = k - 1;
		while(low < high)
		{
			int mid = (low + high + 1) / 2;
			if(d[mid] > left)
				high = mid - 1;
			else
				low = mid;
		}		
		if(d[low] <= left)
			ans = min(ans, (n - c[low]) * a[i]);
		else if(left >= 0)
			ans = min(ans, n * a[i]);
	}

	for(int i = 0; i < k; i++)
	{
		if(d[i] <= s)
			ans = min(ans, (n - c[i]) * x);
	}

	cout << ans << "\n";
	return 0;
}
