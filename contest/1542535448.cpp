#include <cstdio>
int N, K, v[16];
int main()
{
	for (scanf("%d%d", &N, &K); N--; )
	{
		int x = 0;
		for (int j = 0, w; j < K; j++)
		{
			scanf("%d", &w);
			x |= w << j;
		}
		v[x] = 1;
	}
	for (int i = 0; i < 1 << K; i++)
		for (int j = 0; j < 1 << K; j++)
			if (v[i] && v[j] && !(i & j))
			{
				puts("YES");
				return 0;
			}
	puts("NO");
	return 0;
}
