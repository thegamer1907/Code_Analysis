#include <bits/stdc++.h>

using namespace std;

#define rfile freopen("path.in", "r", stdin)
#define wfile freopen("path.out", "w", stdout)
#define files rfile; wfile
#define pb push_back
#define fi first
#define se second
#define sws ios_base::sync_with_stdio(0)

typedef long long ll;
typedef long double ld;
typedef vector< int > vi;
typedef vector< char > vc;
typedef vector< vc > vvc;
typedef vector< vi > vvi;
typedef map< int, int > mapT;
typedef pair< int, int > pairT;

const int inf = (int)1e9;
const ll llinf = (ll)3e18;
const int N = (int)1e5 + 111;
const ld PI = (ld)acos(-1);

int n, s, a[N];

ll cnt(int k)
{
	vector< ll > b(n);
	for (int i = 0; i < n; i++)
		b[i] = a[i] + (ll)(i + 1) * k;
	sort(b.begin(), b.end());
	ll res = 0;
	for (int i = 0; i < k; i++)
		res += b[i];
	return res;
}

int main()
{
	scanf("%d %d", &n, &s);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int l = 0, r = n + 1, m;
	while (l < r - 1)
	{
		m = (l + r) / 2;
		if (cnt(m) <= (ll)s)
			l = m;
		else
			r = m;
	}
	printf("%d %lld\n", l, cnt(l));
	return 0;
}