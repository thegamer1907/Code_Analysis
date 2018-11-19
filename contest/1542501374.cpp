#include <bits/stdc++.h>
using namespace std;
#define maxn 500000
#define int long long
#define INF 999999999999LL
int n, K, ql = 1, qr = 1, a[maxn];
int ans, cnt[maxn], f[maxn][23];

int read()
{
	int x = 0, k = 1;
	char c; c = getchar();
	while(c < '0' || c > '9') { if(c == '-') k = -1; c = getchar(); }
	while(c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
	return x * k;
}

void Move(int l, int r)
{
	while(ql < l) cnt[a[ql]] --, ans -= cnt[a[ql]], ql ++;
	while(ql > l) ql --, ans += cnt[a[ql]], cnt[a[ql]] ++;
	while(qr > r) cnt[a[qr]] --, ans -= cnt[a[qr]], qr --;
	while(qr < r) qr ++, ans += cnt[a[qr]], cnt[a[qr]] ++;
}

void Divide(int l, int r, int L, int R, int K)
{
	if(l > r) return;
	int mid = (l + r) >> 1, pos = -1, lim = min(mid, R); 
	for(int i = L; i <= lim; i ++)
	{
		Move(i, mid);
		if(ans + f[i - 1][K - 1] < f[mid][K]) 
			f[mid][K] = f[i - 1][K - 1] + ans, pos = i;
	}
	Divide(l, mid - 1, L, pos, K);
	Divide(mid + 1, r, pos, R, K);
}

signed main()
{
	n = read(), K = read();
	for(int i = 1; i <= n; i ++) a[i] = read();
	for(int i = 0; i <= n; i ++)
		for(int j = 0; j <= K; j ++)
			f[i][j] = INF;
	f[0][0] = 0; cnt[a[1]] ++;
	for(int i = 1; i <= K; i ++) Divide(1, n, 1, n, i);
	printf("%lld\n", f[n][K]);
	return 0;
}
 