#include <bits/stdc++.h>
 
typedef long long int ll;
 
using namespace std;

ll n, m, k, t, r;
ll p[100000];
ll ans = 0;

int main() {
    cin >> n >> m >> k;
    t = 0;
    r = 1;
    cin >> p[0];
    while (p[0] > t) {
        t += k;
    }
    for (ll i = 1; i < m; ++i) {
        cin >> p[i];
        if (p[i] > t) {
            ++ans;
            t += r;
            r = 1;
        } else {
            ++r;
        }
        while (p[i] > t) {
            t += k;
        }
    }
    ans += r > 0;
    cout << ans << endl;
    return 0;
}