#include <bits/stdc++.h>

#define _USE_MATH_DEFINES
#define eb emplace_back
#define all(a) (a).begin(), (a).end()
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define rofn(i, n) for (int i = int(n) - 1; i >= 0; i--)
#define endl '\n'
#define fst first
#define snd second
#define x first
#define y second

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<double, double> pd;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<double> vd;
typedef vector<vd> vvd;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

using namespace std;

ll n;
int d;


int main() {
#ifdef _DEBUG
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    fast_io();

    int n;
    cin >> n;

    int cur = 0, ans = 0;
    forn (i, n) {
        int in, out;
        cin >> out >> in;

        cur += in - out;

        ans = max(ans, cur);
    }

    cout << ans << endl;

    return 0;
}