#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 10;
const int inf = 0x3f3f3f3f;

bool st[20];
int main()
{
	int n, k, x;
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++)
	{
		int tmp = 0;
		for(int j = 0; j < k; j++)
		{
			scanf("%d", &x);
			tmp |= (x << j);
		}
		st[tmp] = 1;
	}
	bool ans = 0;
	for(int i = 0; i < 16 && !ans; i++)
		for(int j = 0; j < 16 && !ans; j++)
			if(st[i] && st[j] && (i & j) == 0)
				ans = 1;
	printf("%s\n", ans ? "YES" : "NO");

	return 0;
}