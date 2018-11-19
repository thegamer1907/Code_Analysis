#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int know[100010][4];
int N,K;
int cnt[16];
int tmpcnt[16];
int v[16];
int maxdep;
bool ok = false;
int sum[4];

void dfs(int dep)
{
	if (dep == maxdep + 1)
	{
		for (int i=0;i<(1<<K);i++)
			if (tmpcnt[i] > cnt[i]) return;
		for (int i=0;i<K;i++)sum[i] = 0;
		for (int i=1;i<=maxdep;i++)
			for (int j=0;j<K;j++)
			if ((1<<j) & v[i])
				sum[j]++;
		for (int j=0;j<K;j++)
			if (sum[j] > maxdep / 2) return;
		ok = true;
		return;
	}
	for (int i=0;i<(1<<K);i++)
	{
		tmpcnt[i]++;
		v[dep] = i;
		dfs(dep+1);
		tmpcnt[i]--;
	}
}

int main()
{
	scanf("%d%d",&N,&K);
	for (int i=1;i<=N;i++)
	{
		int ret = 0;
		for (int j=0;j<K;j++)
		{
			int tmp;
			scanf("%d",&tmp);
			ret = ret * 2 + tmp;
		}
		cnt[ret]++;
	}
	if (cnt[0]) return 0*puts("YES");
	for (maxdep=2;maxdep<=5;maxdep++)
		dfs(1);
	puts(ok?"YES":"NO");
}
