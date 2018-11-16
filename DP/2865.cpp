#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll md = 1e9+7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;

    ll mem[k][n+1];
    memset(mem, 0, sizeof mem);

    vector<ll> factors[n+1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            if (i % j) continue;
            ll div = j;
            ll div2 = i / j;
            factors[i].push_back(div);
            if (div != div2) factors[i].push_back(div2);
        }
    }

    ll ans = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 0) {
                mem[i][j] = 1; 
            } else {
                for (ll factor: factors[j]) {
                    mem[i][j] += mem[i-1][factor];
                    mem[i][j] %= md;
                }
            }

            if (i == k-1) {
                ans += mem[i][j];
                ans %= md;
            }
        }
    }

    cout << ans << '\n';
}