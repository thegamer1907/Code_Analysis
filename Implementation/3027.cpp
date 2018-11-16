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
const int MAXN = 1005;
string s[MAXN];

int main()
{
	ios::sync_with_stdio(0);
	cin >> n;

	bool done = false;
	for(int i = 0; i < n; i++)
	{
		cin >> s[i];
		if(!done && s[i][0] == 'O' && s[i][1] == 'O')
		{
			done = true;
			s[i][0] = '+';
			s[i][1] = '+';
		}
		else if(!done && s[i][3] == 'O' && s[i][4] == 'O')
		{
			done = true;
			s[i][3] = '+';
			s[i][4] = '+';
		}
	}

	if(done)
	{
		cout << "YES\n";
		for(int i = 0; i < n; i++)
			cout << s[i] << "\n";
	}
	else
		cout << "NO\n";


	return 0;
}
