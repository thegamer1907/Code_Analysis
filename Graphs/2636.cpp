#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
#include <cstring>
// DON'T DIVIDE
// Try different approaches
using namespace std;

int n;
set<int> a;

int main()
{
	ios::sync_with_stdio(0);
	cin >> n;

 	int ans = 0;
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		if(i == x)
			ans++;
		else
			a.insert(x);
	}

	cout << ans + a.size() / 2 << "\n";
	return 0;
}