#include<stdio.h>
int n, K;
bool e[16];
int main()
{
	while (~scanf("%d%d", &n, &K))
	{
		for (int i = 0; i < 16; ++i)e[i] = 0;
		for (int i = 1; i <= n; ++i)
		{
			int x = 0, y;
			for (int j = 1; j <= K; ++j)
			{
				scanf("%d", &y);
				x = x << 1 | y;
			}
			e[x] = 1;
		}
		bool flag = e[0] == 1;
		for (int i = 1; i < 16; ++i)if (e[i])
		{
			for (int j = 1; j < 16; ++j)if (e[j])
			{
				if ((i & j) == 0)
				{
					flag = 1;
				}
			}
		}
		if (flag)puts("YES");
		else puts("NO");
	}
	return 0;
}