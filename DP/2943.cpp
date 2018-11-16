#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <cstring>
#include <cstdio>
// Kobe is the GOAT
// DON'T DIVIDE
// Greedy, Prefix, Sets/Bsearch, Dfs/bfs, DP
// Stack, Bitmask, Dsu 
using namespace std;

int n, k;
string s;

int main()
{
	ios::sync_with_stdio(0);
	cin >> n >> k >> s;

	int ans = 0, idx = 0, numb = 0, numa = 0;
	for(int i = 0; i < n; i++)
	{
		while(idx < n && (numb < k || s[idx] == 'a'))
		{
			if(s[idx] == 'b')
				numb++;
			idx++;
		}
		ans = max(ans, idx - i);
		if(s[i] == 'b')
			numb--;
	}

	idx = 0;
	for(int i = 0; i < n; i++)
	{
		while(idx < n && (numa < k || s[idx] == 'b'))
		{
			if(s[idx] == 'a')
				numa++;
			idx++;
		}
		ans = max(ans, idx - i);
		if(s[i] == 'a')
			numa--;
	}

	cout << ans << "\n";
	return 0;
}
