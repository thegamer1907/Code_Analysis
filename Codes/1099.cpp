#include<bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define all(c) (c).begin(), (c).end()
#define sz(c) int((c).size())
#define pb push_back
#define rall(c) (c).rbegin(), (c).rend()

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int n, d;
ll res = 0, ans = 0;
pair<ll, ll> a[100010];

int main() {
    cin >> n >> d;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].fi >> a[i].se;
    }
    sort(a, a + n);
    int l = 0, r = 0;
    while (l != n) {
        while (r != n && a[r].fi - a[l].fi < d) res += a[r++].se;
        ans = max(ans, res);
        res -= a[l++].se;
    }
    cout << ans;
}
