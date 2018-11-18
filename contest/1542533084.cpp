#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int maxn = 100010;
const int maxk = 22;
const ll inf = 0x3f3f3f3f3f3f3f3f;

int cl = 1, cr = 0;
int freq[maxn];
ll cost = 0;

int v[maxn];
ll dp[maxk][maxn];

inline void add(int i)
{
	freq[v[i]]++;
	cost+=freq[v[i]]-1;
}

inline void rem(int i)
{
	cost-=(freq[v[i]]-1);
	freq[v[i]]--;
}

inline void solve(int k, int l, int r, int optl, int optr)
{
	if (l > r) return;

	int m = (l+r)>>1;
	int opt = -1;
	dp[k][m] = inf;
	
	while (cl > min(optr, m)+1) add(--cl);
	while (cr < m) add(++cr);
	while (cl < min(optr, m)+1) rem(cl++);
	while (cr > m) rem(cr--);

	for (int i = min(m, optr); i >= optl; i--) {

		add(--cl);

		if (cost + dp[k-1][i-1] < dp[k][m]) {

			opt = i;
			dp[k][m] = cost+dp[k-1][i-1];
		}
	}

	solve(k, l, m-1, optl, opt);
	solve(k, m+1, r, opt, optr);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) cin >> v[i];

	for (int i = 1; i <= n; i++) add(++cr), dp[1][i] = cost;

	for (int i = 2; i <= k; i++) solve(i, 1, n, 1, n);

	cout << dp[k][n] << "\n";
}
