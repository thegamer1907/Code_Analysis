#include <bits/stdc++.h>

using namespace std;

#define rfile freopen("path.in", "r", stdin)
#define wfile freopen("path.out", "w", stdout)
#define files rfile; wfile
#define pb push_back
#define f first
#define s second
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
const ll llinf = (ll)9e18;
const int N = (int)1e7 + 111;
const ld PI = (ld)acos(-1);

ll pref[N], cnt[N];
char prime[N];

int main()
{
	int n, m, l, r, x;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		cnt[x]++;
	}
	for (int i = 0; i < N; i++)
		prime[i] = 1;
	for (int i = 2; i < N; i++)
		if (prime[i] == 1)
			for (int j = i; j < N; j += i)
			{
				pref[i] += cnt[j];
				prime[j] = 0;
			}
	for (int i = 2; i < N; i++)
		pref[i] += pref[i - 1];
	scanf("%d", &m);
	while (m--)
	{
		scanf("%d %d", &l, &r);
		printf("%lld\n", pref[min(N - 1, r)] - pref[min(N - 2, l - 1)]);
	}
	return 0;
}