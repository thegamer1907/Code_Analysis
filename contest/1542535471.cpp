#include <cstdio>
#include <algorithm>
int N, head[51], next[99], from[99], to[99], len[99], E, root, M, q[51], fa[51], count_e[99], f[51][99][51], vi[51][99];
void BFS()
{
	int H = 0, T = 1, u;
	q[1] = root;
	while (H < T)
		for (int e = head[u = q[++H]]; e; e = next[e])
			if (to[e] != fa[u])
				fa[q[++T] = to[e]] = u;
}
void F(int n, int e)
{
	if (vi[n][e])
		return;
	vi[n][e] = 1;
	f[n][e][0] = 1 << 30;
	if (!next[head[to[e]]])
	{
		for (int i = 1; i < n; i++)
		{
			F(n - i, ((e - 1) ^ 1) + 1);
			f[n][e][i] = f[n - i][((e - 1) ^ 1) + 1][n - i] + len[e];
		}
		f[n][e][n] = 0;
	}
	else
	{
		for (int g = head[to[e]]; g; g = next[g])
			if (to[g] != from[e])
				F(n, g);
		for (int i = 1; i <= n; i++)
		{
			int l = 0, r = (1 << 30) - 1;
			while (l < r)
			{
				int m = l + r + 1 >> 1;
				int count = 0;
				for (int g = head[to[e]]; g; g = next[g])
					if (to[g] != from[e])
						count += std::upper_bound(f[n][g], f[n][g] + n + 1, m - len[g], [] (int x, int y) { return x > y; }) - f[n][g] - 1;
				if (count >= i)
					l = m;
				else
					r = m - 1;
			}
			f[n][e][i] = l;
		}
	}
}
int main()
{
	scanf("%d", &N);
	for (int i = 1, u, v, l; i < N; i++)
	{
		scanf("%d%d%d", &u, &v, &l);
		next[++E] = head[u], from[E] = u, to[E] = v, len[E] = l, head[u] = E;
		next[++E] = head[v], from[E] = v, to[E] = u, len[E] = l, head[v] = E;
	}
	scanf("%d%d", &root, &M);
	BFS();
	for (int i = 1, x; i <= M; i++)
	{
		scanf("%d", &x);
		while (fa[x] != root)
			x = fa[x];
		for (int e = head[root]; e; e = next[e])
			if (to[e] == x)
				count_e[e]++;
	}
	int O = 1 << 30;
	for (int e = head[root]; e; e = next[e])
	{
		F(M, e);
		O = std::min(O, f[M][e][count_e[e]] + len[e]);
	}
	printf("%d\n", O);
	return 0;
}
