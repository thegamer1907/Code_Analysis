#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
#include <cstring>
// DON'T DIVIDE
// Try different approaches
using namespace std;

int n, m, q;
const int MAXN = 100005;
vector<int> a[MAXN];
int best[MAXN];

int main()
{
	ios::sync_with_stdio(0);
	cin >> n >> m;

	for(int i = 0; i < n; i++)
	{
		best[i] = i;
		for(int j = 0; j < m; j++)
		{
			int x;
			cin >> x;
			a[i].push_back(x);
		}
	}
	
	for(int j = 0; j < m; j++)
	{
		int k = 0;
		for(int i = 1; i < n; i++)
		{
			if(a[i][j] < a[i - 1][j])
				k = i;
			best[i] = min(best[i], k);
		}
	}

	cin >> q;
	for(int i = 0; i < q; i++)
	{
		int l, r;
		cin >> l >> r;
		if(best[r - 1] <= l - 1)
			cout << "Yes\n";
		else
			cout << "No\n";
	} 

	return 0;
}