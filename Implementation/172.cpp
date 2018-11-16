#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair <ll, ll> pii;
typedef pair <ll, ll> pll;

#define F first
#define S second
#define add push_back
#define int ll
#define sz(x) (x).size()

const ll INF = (ll)1e9 + 2018;

void source() {
    int n, a, b;
    cin >> n >> a >> b;
    if (a > b) {
        swap(a, b);
    }
    int cnt = __builtin_ctz(n), res = cnt;
    int l = 1, r = n, m = (l + r) / 2;
    while ((a <= m && b <= m) || (a > m && b > m)) {
        cnt--;
        if (b <= m) {
            r = m;
        } else {
            l = m + 1;
        }
        m = (l + r) / 2;
    }
    if (cnt == res) {
        cout << "Final!";
    } else {
        cout << cnt;
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
#ifdef flaax
    freopen("input.txt", "r", stdin);
#endif
    source();
}
