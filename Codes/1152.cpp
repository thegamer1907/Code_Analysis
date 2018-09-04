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

int n, m;
map<string, int> p;

int main()
{
	ios::sync_with_stdio(0);
	cin >> n >> m;	

	for(int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		p[s]++;
	}

	int share = 0;
	for(int i = 0; i < m; i++)
	{
		string s;
		cin >> s;
		if(p[s] > 0)
			share++;
	}
	
	if(n > m)
	{
		cout << "YES\n";
		return 0;
	}
	else if(m > n)
	{
		cout << "NO\n";
		return 0;
	}

	if(share % 2 == 0)
		cout << "NO\n";
	else
		cout << "YES\n";


	return 0;
}