#include <bits/stdc++.h>

#define fr first
#define sc second
#define mk make_pair
#define pb push_back
#define pp pop_back()
#define ll long long
#define ld long double
#define ok puts("OK");
#define sz(s) (int)s.size()
#define all(s) s.begin(), s.end()

using namespace std;

inline ll min(ll a, ll b) {
    return (a > b) ? b : a;
}

inline ll max(ll a, ll b) {
    return (a > b) ? a : b;
}

const int N = 1e5 + 7;
const int inf = 1e9 + 7;
const ll linf = 1e18 + 9;
const double pi = 3.141592653589793238462643;

int main() {
    double h, m, s, t1, t2; cin >> h >> m >> s;
    cin >> t1 >> t2;
    if (t1 > t2) swap(t1, t2);
    bool p = 0;
    if (s > 0) m += 0.5;
    if (m > 0) h += 0.5;
    for (int i = t1; ; i++) {
        if (i == t2) {
            p |= 1;
            break;
        }

        if (i * 5 <= m && m <= i * 5 + 5) {
            break;
        }
        if (i <= h && h <= i + 1) {
            break;
        }
        if (i * 5 <= s && s <= i * 5 + 5) {
            break;
        }
    }
    // cout << h << ' ' << m << ' ' << s << endl;
    for (int i = t1; ; i--) {
        if (i == 0) i = 12;
        if (i == t2) {
            p |= 1;
            break;
        }
        if (i == 1) {
            if (h >= 12) {
                break;
            }
        }
        if (i * 5 - 5 <= m && m <= i * 5) {
            break;
        }
        if (i - 1 <= h && h <= i) {
            break;
        }
        if (i * 5 - 5 <= s && s <= i * 5) {
            break;
        }
    }
    if (p) {
        puts("yes");
    } else {
        puts("no");
    }
}
