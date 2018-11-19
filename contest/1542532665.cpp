#include <cstring>
#include <cstdio>
typedef long long ll; 
int arr[100005], app[100005], x = 1, y;
ll dp[21][100005], cur; 
inline void add(int pos)
{
	cur += app[arr[pos]]++; 
}
inline void del(int pos)
{
	cur -= --app[arr[pos]]; 
}
inline void move(int l, int r)
{
	while (x < l)
		del(x++);
	while (x > l)
		add(--x); 
	while (y < r)
		add(++y); 
	while (y > r)
		del(y--); 
}
void solve(int idx, int l, int r, int ql, int qr)
{
	if (l > r)
		return; 
	int m = l + r >> 1, pos; 
	move(ql, m); 
	for (int i = ql; i <= qr && i < m; i++)
	{
		move(i + 1, m);
		if (dp[idx - 1][i] + cur < dp[idx][m])
		{
			dp[idx][m] = dp[idx - 1][i] + cur; 
			pos = i; 
		}
	}
	solve(idx, l, m - 1, ql, pos); 
	solve(idx, m + 1, r, pos, qr); 
}
int main()
{
	int n, k; 
	scanf("%d%d", &n, &k); 
	for (int i = 1; i <= n; i++)
		scanf("%d", arr + i); 
	memset(dp, 0x3f, sizeof(dp));
	dp[0][0] = 0; 
	for (int i = 1; i <= k; i++)
	{
		solve(i, 1, n, 0, n - 1); 
		dp[i][0] = 0; 
	}
	printf("%lld\n", dp[k][n]);
	return 0;
}

