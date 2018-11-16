#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e3 + 10;

int n, m;
bool mark[MAXN];

int main()
{
	ios::sync_with_stdio(0);
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int u;
		cin >> u;
		mark[u] = true; 
		cin >> u;
		mark[u] = true;
	}
	for (int i = 1; i <= n; i++)
	{
		if (!mark[i])
		{
			cout << n - 1 << endl;
			for (int j = 1; j <= n; j++)
			{
				if (j == i)
				{
					continue;
				}
				cout << i << ' ' << j << endl;
			}
			return 0;
		}

	}
	return 0;
}