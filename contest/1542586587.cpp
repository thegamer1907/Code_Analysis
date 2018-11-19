#include <bits/stdc++.h>

#define fr first
#define sc second
#define mk make_pair
#define pb push_back
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
    string s; cin >> s;
    int n; scanf ("%d", &n);
    bool p = 0, pp = 0;
    for (int i = 1; i <= n; i++) {
        string t;
        cin >> t;
        if (t == s) {
            puts("yes");
            return 0;
        }
        if (t[0] == s[1]) {
            p = 1;
        }
        if (t[1] == s[0]) {
            pp = 1;
        }
    }
    if (p && pp) {
        puts("YES");
    } else {
        puts("NO");
    }
}
