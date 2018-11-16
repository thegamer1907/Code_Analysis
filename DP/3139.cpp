#include <cstdio>
char a[501][501];
int X[501][502], Y[501][502], N, M, Q;
int main()
{
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++)
		scanf("%s", a[i]);
	for (int i = 1; i < N; i++)
		for (int j = 1; j <= M; j++)
			X[i][j] = X[i - 1][j] + X[i][j - 1] - X[i - 1][j - 1] + (a[i - 1][j - 1] == '.' && a[i][j - 1] == '.');
	for (int i = 1; i <= N; i++)
		for (int j = 1; j < M; j++)
			Y[i][j] = Y[i - 1][j] + Y[i][j - 1] - Y[i - 1][j - 1] + (a[i - 1][j - 1] == '.' && a[i - 1][j] == '.');
	for (scanf("%d", &Q); Q--; )
	{
		int u, d, l, r;
		scanf("%d%d%d%d", &u, &l, &d, &r);
		printf("%d\n", X[d - 1][r] - X[d - 1][l - 1] - X[u - 1][r] + X[u - 1][l - 1] + Y[d][r - 1] - Y[d][l - 1] - Y[u - 1][r - 1] + Y[u - 1][l - 1]);
	}
	return 0;
}
