#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

#define size(s) (ll)(s).size()
#define all(s) (s).begin(), s.end()

const ll MAXN = 1e5 + 1;
const ll INF = 1e9 + 1;
const ll MOD = 1e9;
const ll BITS = 64;
const ld EPS = 1e-12;

void bye() {
    cout << "\n";
    exit(0);
}

vector<int> pref, g;
int n, k;

int count(int l, int r) {
    return pref[r] - ((l) ? pref[l - 1] : 0);
}

bool check(ll v) {
    for (int i = 0; i <= n - v; i++) {
        if (count(i, i + v - 1) <= k) {
            return 1;
        }
    }
    return 0;
}

void get(ll v) {
    ll l = 0, r = 0;
    for (int i = 0; i <= n - v; i++) {
        if (count(i, i + v - 1) <= k) {
            l = i, r = i + v - 1;
            break;
        }
    }
    for (int i = l; i <= r; i++) {
        g[i] = 1;
    }
}

signed main() {
    #ifdef _TIM
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        // freopen("next.in", "r", stdin);
        // freopen("next.out", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    g.resize(n);
    pref.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }
    pref[0] = (g[0] == 0);
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + (g[i] == 0);
    }
    ll l = 0, r = n + 1;
    while (r - l > 1) {
        ll mid = (l + r) / 2;
        if (check(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << l << "\n";
    get(l);
    for (auto v : g) {
        cout << v << " ";
    }
    bye();
}
