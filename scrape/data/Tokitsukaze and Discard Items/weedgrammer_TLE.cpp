#include <bits/stdc++.h>

const int INF = (int)1e9;


using namespace std;

#define endl '\n'
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define popcnt(x) __builtin_popcount(x)

typedef long long ll;




int main () {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    ll e = k, ans = 0;
    int i = 0;
    while (i < m) {
        ll pos = upper_bound(a.begin(), a.end(), e) - a.begin();
        ll cnt = pos - i;
        if (cnt > 0) {
            e += cnt, ans++;
            i = pos;
        }
        else {
            e = min(e + k, n);
        }
    }
    cout << ans << endl;
    return 0;
}