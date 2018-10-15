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

int n, m;
const int MAXN = 100005;
int d[MAXN], a[MAXN], last[MAXN];

bool finish(int x)
{
	vector<pair<int, int> > v;
	memset(last, 0, sizeof(last));

	for(int i = 1; i <= x; i++)
		last[d[i]] = i;
	for(int i = 1; i <= m; i++)
	{
		if(last[i] == 0)
			return false;
		v.push_back(make_pair(last[i], i));
	}
	sort(v.begin(), v.end());

	int counter = 0, idx = 0;
	for(int i = 1; i <= x; i++)
	{
		if(counter == a[v[idx].second])
		{	
			idx++;
			counter = 0;
		}
		else 
			counter++;
		if(idx == m)
			return true;
		if(v[idx].first == i)
			return false;
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(0);
	cin >> n >> m;

	for(int i = 1; i <= n; i++)
		cin >> d[i];
	for(int i = 1; i <= m; i++)
		cin >> a[i];

	int low = 1, high = n;
	while(low < high)
	{
		int mid = (low + high) / 2;
		if(finish(mid))
			high = mid;
		else
			low = mid + 1;
	}

	if(finish(low))
		cout << low << "\n";
	else
		cout << -1 << "\n";

	return 0;
}
