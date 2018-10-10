#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for(int i = 0; i < n; ++i)
#define debug(...) fprintf(stderr, __VA_ARGS__); fflush(stderr)
#define mp make_pair
#define pb push_back
#define X first
#define Y second

typedef long long ll;
typedef long double ld;
typedef double db;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<db, db> pdd;

const int N = 1e5 + 7, INF = 1e9 + 7;

ll n;

bool check(ll k)
{
    ll res = 0;
    ll r = n;

    while (r > 0)
    {
        ll eat = min(r, k);
        res += eat;
        r -= k;
        r -= r / 10;
    }

    return 2 * res >= n;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    ll l = 0;
    ll r = n;

    while (r - l > 1)
    {
        ll mid = l + (r - l) / 2;
        if (check(mid))
            r = mid;
        else
            l = mid;
    }

    cout << r;

    return 0;
}
