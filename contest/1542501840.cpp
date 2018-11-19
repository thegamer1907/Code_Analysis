#include <bits/stdc++.h>
#define endl '\n'

//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

using namespace std;
template<class T, class T2> inline int chkmax(T &x, const T2 &y) { return x < y ? x = y, 1 : 0; }
template<class T, class T2> inline int chkmin(T &x, const T2 &y) { return x > y ? x = y, 1 : 0; }
const int MAXN = (1 << 20);
const int64_t inf = (int64_t)1e18;

int n, k; 
int a[MAXN];

void read()
{
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
}

int64_t dp[MAXN][2];

int cnt[MAXN];
int64_t cost;
int curr_l, curr_r;

void add(int p)
{
	cost += cnt[a[p]];
	cnt[a[p]]++;
}

void rem(int p)
{
	cnt[a[p]]--;
	cost -= cnt[a[p]];
}

void fix(int l, int r)
{
	while(curr_l < l) rem(curr_l++);
	while(curr_l > l) add(--curr_l);
	while(curr_r < r) add(++curr_r);
	while(curr_r > r) rem(curr_r--);
}

void rec(int l, int r, int opt_l, int opt_r, int rw)
{
	if(l > r) return;

	int mid = (l + r) >> 1, opt = mid;
	dp[mid][rw] = inf;

	for(int i = min(mid, opt_r); i >= opt_l; i--)
	{
		fix(i, mid);
		if(chkmin(dp[mid][rw], dp[i - 1][rw ^ 1] + cost))
			opt = i;
	}

	rec(l, mid - 1, opt_l, opt, rw);
	rec(mid + 1, r, opt, opt_r, rw);
}

void solve()
{
	curr_l = curr_r = 1;
	add(1);

	for(int i = 1; i <= n; i++)
		dp[i][0] = inf;

	for(int _k = 1; _k <= k; _k++)
	{
		dp[0][_k & 1] = inf;
		rec(1, n, 1, n, _k & 1);
	}

	cout << dp[n][k & 1] << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	read();
	solve();
	return 0;
}

