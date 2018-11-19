#include <bits/stdc++.h>

using namespace std;
using LL = long long;
int cnt[32];

int main()
{
	multiset<int> s;
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++)
	{
		int ret = 0;
		for (int j = 1; j <= k; j++)
		{
			int x;
			scanf("%d", &x);
			ret = ret << 1 | x;
		}
		cnt[ret]++;
	}
	bool ok = 0;
	if(cnt[0]) ok = 1;
	for (int i = 0; i < 16; i++)
		if (cnt[i])
		{
			cnt[i]--;
			for (int j = 0; j < 16; j++)
				if (cnt[j] && (j & i) == 0)
				{
					ok = 1;
				}
			cnt[i]++;
		}
	if (ok) puts("YES");
	else puts("NO");
	return 0;
}