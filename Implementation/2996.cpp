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

int main()
{
	ios::sync_with_stdio(0);
	cin >> n;

	int m = 0, c = 0;
	for(int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		if(x > y)
			m++;
		else if(x < y)
			c++;
	}

	if(m > c)
		cout << "Mishka\n";
	else if(c > m)
		cout << "Chris\n";
	else
		cout << "Friendship is magic!^^\n";

	return 0;
}
