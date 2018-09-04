#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define sz(x) ((long long int)(x).size())
#define pb push_back
#define itn int
#define mp make_pair
#define pii pair<ll, ll>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, k;
    cin >> n >> m >> k;
    ll l = 1, r = n * m + 1;
    while (l < r) {
        ll mid = (r + l) / 2;
        ll i = 0, res = 0;
        ll nm = mid - 1;
        for (int i = 1; i <= n; ++i)
            res += min(m, nm / i);
        if (res < k)
            l = mid + 1;
        else
            r = mid;
    }
    cout << l - 1;
    return 0;
}
