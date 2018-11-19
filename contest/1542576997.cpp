#include <iostream>
#include <cstdio>
using namespace std;

int n, k, vst[1<<20];

bool Check(int x, int y)
{
	for (int i = 0; i < k; i++)
		if ((x << i) & (y << i)) return false;
	return true;
}

int main()
{
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++)
	{
		int x, tmp = 0;
		for (int j = 1; j <= k; j++)
		{
			scanf("%d", &x);
			tmp <<= 1;
			tmp |= x;
		}
		vst[tmp]++;
	}
	for (int i = 0; i < (1 << k); i++)
		for (int j = 0; j < (1 << k); j++)
			if (Check(i, j) && vst[i] && vst[j])
			{
				puts("YES");
				return 0;
			}
	puts("NO");
}