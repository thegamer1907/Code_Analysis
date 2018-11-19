#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second

using namespace std;

typedef long long unsigned ll;
typedef long double ld;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

const ld eps = 1e-12;
const double PI = 3.14159265359;
const int INF = 1e9 + 41;
const ll LINF = 1e18 + 41;
const int N = 1000 * 100;

ll myRand() {
    ll q = rand();
    return (q << 16) ^ rand();
}

int myabs(int x) {
    return (x < 0 ? -x : x);
}

void init() {
    #ifdef KEK
        freopen("a.in", "r", stdin);
        //freopen("a.out", "w", stdout);
    #else
        ///freopen("input.txt", "r", stdin);
        ///freopen("output.txt", "w", stdout);
    #endif // HARD
    cout.precision(2);
}

void solve() {
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;

    h = (h * 5) % 60;
    t1 = (t1 * 5) % 60;
    t2 = (t2 * 5) % 60;

    s *= 12 * 60 * 60;
    m *= 12 * 60 * 60;
    h *= 12 * 60 * 60;
//    cerr << h << ' ' ;
    t1 *= 12 * 60 * 60;
    t2 *= 12 * 60 * 60;
    m += s / 60;
    h += m / 60;
//    cerr << h << ' ' << m << ' ' << s << ' ' << t1 << ' ' << t2 << "\n";
    int ps = t1;
    while (1) {
        if (ps == s || ps == h || ps == m) {
            //cerr << ps << ' ' ;
            break;
        }
        if (ps == t2) {
            cout << "YES";
            return;
        }
        ps = (ps + 1) % (12 * 60 * 60 * 60);
    }
    ps = t1;
    while (1) {
        if (ps == s || ps == h || ps == m) {
            //cerr << ps << ' ' ;
            break;
        }
        if (ps == t2) {
            cout << "YES";
            return;
        }
        ps = (ps - 1 + (12 * 60 * 60 * 60)) % (12 * 60 * 60 * 60);
    }
    cout << "NO";
}

int main() {
    init();
    solve();
    return 0;
}
