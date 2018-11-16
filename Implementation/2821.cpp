#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
#include <cstring>
// DON'T DIVIDE
// Greedy, Prefix, Sets/Bsearch, Dfs/bfs, DP
// Stack, Bitmask, Dsu 
using namespace std;

int n;

int main()
{
	ios::sync_with_stdio(0);
	cin >> n;

	if(n % 2 == 1)
	{
		cout << n / 2 << "\n";
		for(int i = 1; i < n / 2; i++)
			cout << 2 << " ";
		cout << 3 << "\n";
	}
	else
	{
		cout << n / 2 << "\n";
		for(int i = 0; i < n / 2; i++)
			cout << 2 << " ";
		cout << "\n";
	}

	return 0;
}