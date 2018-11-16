#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

typedef double db;
typedef long long ll;
typedef long double ld;
typedef unsigned int ui;
typedef unsigned long long ull;

typedef pair < ll, ll > pll;
typedef pair < int, ll > pil;
typedef pair < ll, int > pli;
typedef pair < int, int > pii;

typedef pair < db, db > pdd;
typedef pair < db, ld > pdl;
typedef pair < ld, db > pld;
typedef pair < ld, ld > ldp;

#define F first
#define S second

#define en end()
#define bg being()

#define rev reverse
#define mp make_pair
#define pb push_back

#define y1 y0123456789
#define um unordered_map

#define all(x) x.bg, x.en
#define sz(x) (int)x.size()
#define len(x) (int)strlen(x)

#define sqr(x) ((x) * 1ll * (x))
#define sqrd(x) ((x) * 1.0 * (x))

#define forn(i, x) for (int i = 1; i <= x; i++)

const int dx[] = {0, 0, 1, 0, -1};
const int dy[] = {0, 1, 0, -1, 0};

const ll inf = (ll)1e18;
const ll mod = (ll)1e9 + 7;

const db eps = (db)1e-9;
const db pi = acos(-1.0);

const int N = 100500;

int n, a, b;

int rec(int l, int r) {
    if (l == r)
        return 0;
    int mid = (l + r) >> 1;
    int cur = rec(l, mid) + 1;
    rec(mid + 1, r);
    if (l <= a && a <= mid && mid + 1 <= b && b <= r) {
        if (l == 1 && r == n)
            cout << "Final!";
        else
            cout << cur;
        exit(0);
    }
    return cur;
}

int main() {
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    //freopen(".err", "w", stderr);

    //srand(time(NULL));

    //cin.tie(NULL);
    //cout.tie(NULL);
    //ios_base::sync_with_stdio(false);

    //cout << setprecision(10) << fixed;

    cin >> n >> a >> b;

    if (a > b)
        swap(a, b);

    rec(1, n);

    //cerr << (clock() + 0.0) / CLOCKS_PER_SEC;

    return 0;
}
