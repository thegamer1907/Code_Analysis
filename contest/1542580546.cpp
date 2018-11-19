#include <cstdio>
#include <cstring>
#include <iostream>
#include <bitset>
#include <algorithm>
#define maxn 110000
using namespace std;

bool in[maxn][5], vis[maxn];
int cnt[maxn], n, m;


int main()
{
	// freopen("in", "r", stdin);
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &in[i][j]);
			if (in[i][j])
				cnt[i] |= 1 << j;
		}
	}
	for (int i = 0; i < n; i++)
	{
		// printf("%d\n", cnt[i]);
		vis[cnt[i]] = true;
	}

	int ans = 0;
	
	for (int i = 0; i < n; i++)
	{
		int x = cnt[i];
		// if (x == 0)
		// {
		// 	ans++;
		// 	continue;
		// }
		for (int j = 0; j < (1 << m); j++)
		{
			// if (j == x)
			// 	continue;
			if (vis[j])
			{
				if (!(x & j))
					ans++;
			}
		}
	}
	if (ans)
		puts("YES");
	else
		puts("NO");
	return 0;
}

