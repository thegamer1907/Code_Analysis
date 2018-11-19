#include <cstdio>
#include <cstdlib>

bool stat[20], judge(false);
int cont[20], tp(0), N, K;

int cnt[5];

void dfs(int now, int tot)
{
	if (now == tp)
	{
		if (tot > 0)
		{
			int p(0);
			for (int i(0); i < K; ++i)
			{
				if (cnt[i] <= tot / 2)
				{
					++p;
				}
			}
			if (p == K)
			{
				judge = true;
			}
		}
		return;
	}
	dfs(now + 1, tot);
	for (int i(0); i < K; ++i)
	{
		if ((cont[now] >> i) & 1)
		{
			++cnt[i];
		}
	}
	dfs(now + 1, tot + 1);
	for (int i(0); i < K; ++i)
	{
		if ((cont[now] >> i) & 1)
		{
			--cnt[i];
		}
	}
}

int main()
{
	scanf("%d%d", &N, &K);
	for (int i(0); i < N; ++i)
	{
		int now(0);
		for (int j(0); j < K; ++j)
		{
			int a;
			scanf("%d", &a);
			now <<= 1;
			now += a;
		}
		stat[now] = true;
	}
	if (stat[0])
	{
		printf("YES");
		return 0;
	}
	for (int i(1); i < (1 << K) - 1; ++i)
	{
		if (stat[i])
		{
			cont[tp++] = i;
		}
	}
	dfs(0, 0);
	printf(judge ? "YES" : "NO");
	// system("pause");
	return 0;
}
