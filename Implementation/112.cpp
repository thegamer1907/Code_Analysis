#include <bits/stdc++.h>

using namespace std;

#define int long long
#define mp make_pair
#define pb emplace_back
#define push_back emplace_back
#define sz(x) ((int)(x.size()))
#define x first
#define y second
#define forn(i, n) for (int i = 0; i < n; i++)
#define sqr(x) ((x) * (x))
#define all(x)
#define endl '\n'

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <ld, ld> pld;
typedef vector <int> lnum;

const ll INFINT = 1e9 + 10;
const ll MOD = 1e9 + 7;
const int N = 1e6 + 10;
const int M = 1e3 + 10;
const int pi = acos(-1);
const ld eps = 1e-12;
const ll INFLL = 1e18 + 10;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    a--;
    b--;
    int r = ceil(log2(n)) - 1;
    //cout << r << endl;
    if ((a & (1 << r)) != (b & (1 << r)))
        return cout << "Final!", 0;
    for (int i = 8; i >= 0; i--)
        if ((a & (1 << i)) != (b & (1 << i)))
            return cout << i + 1, 0;
    return 0;
}
