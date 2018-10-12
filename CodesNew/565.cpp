#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

typedef double db;
typedef long long ll;
typedef long double ld;
typedef unsigned int ui;
typedef unsigned long long ull;

typedef pair < db, db > pdd;
typedef pair < db, ld > pdl;
typedef pair < ld, db > pld;
typedef pair < ld, ld > ldp;

typedef pair < ll, ll > pll;
typedef pair < int, ll > pil;
typedef pair < ll, int > pli;
typedef pair < int, int > pii;

#define F first
#define S second

#define en end()
#define bg begin()

#define rev reverse
#define mp make_pair
#define pb push_back

#define y1 y1234567890
#define um unordered_map

#define all(x) x.bg, x.en
#define sz(x) (int)x.size()
#define len(x) (int)strlen(x)

#define sqr(x) ((x + 0ll) * (x))
#define sqrd(x) ((x + 0.0) * (x))

#define forn(i, n) for (int i = 1; i <= n; i++)

const ll inf = (ll)1e18;
const ll mod = (ll)1e9 + 7;

const db eps = (db)1e-9;
const db pi = acos(-1.0);

const int dx[] = {0, 0, 1, 0, -1};
const int dy[] = {0, 1, 0, -1, 0};

const int N = 1000500;
const int M = (int)1e7 + 5;

const int m = (int)1e7;
const int lim = 3162;

ll cnt[M];
int n, q, a[N], p[M];

int main() {
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	//freopen(".err", "w", stderr);

	//srand(time(NULL));

	//cin.tie(NULL);
	//cout.tie(NULL);
	//ios_base::sync_with_stdio(false);

	//cout << setprecision(10) << fixed;

	for (int i = 2; i <= m; i += 2)
		p[i] = 2;

	for (int i = 3; i <= lim; i += 2)
		if (!p[i])
			for (int j = i * i; j <= m; j += i + i)
				p[j] = i;

	for (int i = 3; i <= m; i += 2)
		if (!p[i])
			p[i] = i;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int x;
		scanf("%d", &x);
		while (x > 1) {
			int pr = p[x];
			cnt[pr]++;
			while (x % pr == 0)
				x /= pr;
		}
	}

	for (int i = 1; i <= m; i++)
		cnt[i] += cnt[i - 1];

	scanf("%d", &q);
	
	while (q--) {
		int l, r;
		scanf("%d %d", &l, &r);
		if (l > m)
			puts("0");
		else {
			r = min(r, m);
			printf("%I64d\n", cnt[r] - cnt[l - 1]);
		}
	}
	
	//cerr << (clock() + 0.0) / CLOCKS_PER_SEC;

	return 0;
}
