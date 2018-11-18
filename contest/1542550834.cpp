#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 100;

bool used[(1 << 5)];
int mask[N];

int main()
{
	vector <int> v;
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			int val;
			scanf("%d", &val);
			mask[i] |= val << (k - j);
		}
		
		used[mask[i]] = 1;
		for (int m = 0; m < (1 << k); m++)
		{
			if (used[m] && (mask[i] & m) == 0)
			{
				return puts("YES"), 0;
			}
		}
	}
	
	return puts("NO"), 0;
}