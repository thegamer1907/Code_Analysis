#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int INF = 0x3fffffff;
const ll inf = 0x7fffffffffffffff;
const int MAXN = 100010;
ll n;

bool ok(ll k) {
    ll sa = 0, sb = 0;
    ll nn = n;
    while (nn) {
        sa += min(k, nn);
        nn -= min(k, nn);
        if (nn >= 10) {
            sb += nn / 10;
            nn -= nn / 10;
        }
    }
    return sa >= sb;
}

int main() {
    cin >> n;
    ll l = 1, r = n;
    while (l < r) {
        ll m = l + r >> 1;
        if (ok(m))
            r = m;
        else
            l = m + 1;
    }
    cout << r << endl;
}
