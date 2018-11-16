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
string s[2];

int main()
{
	ios::sync_with_stdio(0);
	cin >> n;

	s[0] = "hate";
	s[1] = "love";
	for(int i = 0; i < n - 1; i++)
		cout << "I " << s[i % 2] << " that ";
	cout << "I " << s[(n - 1) % 2] << " it\n";

	return 0;
}
