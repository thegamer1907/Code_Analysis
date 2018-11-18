#include<bits/stdc++.h>

#define fin() freopen("input.txt","r",stdin)
#define fout() freopen("out.txt","w",stdout)
#define ss(dp,n) memset (dp,n, sizeof (dp))
#define ll long long int
#define f first
#define s second
#define pb push_back
#define PII pair<ll,ll>
#define mp(a,b) make_pair(a,b)
#define MOD 1000000007
#define N 1000005
#define LN 20
#define inf 1e18+5
#define fast_io  ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

ll n, m, a[N];
ll dp[2][N];

ll ans = 0;
ll p[N];
ll cl = 1, cr = 0;

void add (ll idx)
{
	ans -= (p[a[idx]] * (p[a[idx]] - 1)) / 2;
	p[a[idx]]++;
	ans += (p[a[idx]] * (p[a[idx]] - 1)) / 2;
}
void rev (ll idx)
{
	ans -= (p[a[idx]] * (p[a[idx]] - 1)) / 2;
	p[a[idx]]--;
	ans += (p[a[idx]] * (p[a[idx]] - 1)) / 2;
}
void range (ll l, ll r)
{
	while (cl < l) rev (cl++);
	while (cl > l) add (--cl);
	while (cr < r) add (++cr);
	while (cr > r) rev (cr--);
}
void solve (ll d1[], ll d2[], ll L, ll R, ll l, ll r)
{
	if (L > R) return;
	ll mid = (L + R) / 2;
	d1[mid] = inf;
	ll best = -1;
	for (ll j = l; j <= min (mid, r); j++)
	{
		range (j, mid);
		if (d2[j - 1] + ans < d1[mid])
		{
			d1[mid] = d2[j - 1] + ans;
			best = j;
		}
	}
	solve (d1, d2, L, mid - 1, l, best);
	solve (d1, d2, mid + 1, R, best, r);
}
int main()
{
	ios::sync_with_stdio (false);
	cin.tie (NULL);
	ll k;
	cin >> n >> k;
	for (ll i = 1; i <= n; i++) cin >> a[i];
	ll u = 0, v = 1;
	for (ll i = 0; i <= n; ++i)
		dp[u][i] = inf;
	dp[u][0] = 0;
	for (ll i = 1; i <= k; i++)
	{
		for (ll i = 0; i <= n; ++i)
			dp[v][i] = inf;
		solve (dp[v], dp[u], 1, n, 1, n);
		swap (u, v);
	}
	cout << dp[u][n];
	return 0;
}
