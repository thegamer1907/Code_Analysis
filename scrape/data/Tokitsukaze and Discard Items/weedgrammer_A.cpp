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
    ll e = k, ans = 0, cnt = 0;
    for (int i = 0; i < m; i++) {
        if (a[i] <= e) {
            cnt++;
        }
        else {
            e += cnt, ans += (cnt > 0);
            if (cnt == 0) {
                ll x = (a[i] - e + k - 1) / k;
                e += x * k;
            }
            cnt = 0, i--;
        }
    }
    ans += (cnt > 0);
    cout << ans << endl;
    return 0;
}