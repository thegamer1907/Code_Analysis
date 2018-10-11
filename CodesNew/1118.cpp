#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define size(s) (ll)(s).size()
#define all(s) (s).begin(), s.end()

const ll MAXN = 1e5 + 1;
const ll INF = 1e9 + 1;
const ll MOD = 998244353;
const ll BITS = 64;
const ll PRIME = 31;
const ld EPS = 1e-12;


struct Solution {
    ll N;
    bool check(ll k) {
        ll n = N, ans = 0;
        //cerr << k << ' ' << (ans >= N/2 + N%2) << endl;
        while(n) {
            ans += min(n, k);
            n -= min(n, k);
            n = n - (n / 10);
        }
        return (ans >= N/2 + N%2);
    }
    ll get(ll _N) {
        N = _N;
        ll l = 0, r = 2e18;
        while (r - l > 1) {
            ll m = (l + r) / 2;
            if (check(m)) r = m;
            else l = m;
        }
        return r;
    }
};

signed _main() {
    ll n;
    cin >> n;
    Solution solve;
    cout << solve.get(n);
}

signed main() {
    #ifdef _MIKU
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif // _BM
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    _main();
}
