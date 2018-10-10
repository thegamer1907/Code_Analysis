#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, m, k;

ll judge(ll t) {
    ll res = 0;
    for (int i = 1; i <= n; i ++)
        res += min(m, t / i);
    return res >= k;
}

int main() { 
    ios::sync_with_stdio(false);
    cin >> n >> m >> k;
    ll l = 1, r = n * m, mid, ans;
    while (l <= r) {
        mid = (l + r) >> 1;
        if (judge(mid)) ans = mid, r = mid - 1;
        else l = mid + 1;
    }
    cout << ans;
    return 0;
}