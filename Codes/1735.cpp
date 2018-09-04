#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 500000 + 10;

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll l = 1, r = n * m, ans = -1;
    while (l <= r) {
        ll mid = (l + r) >> 1;
        ll cnt = 0;
        for (int i = 1; i <= n; ++i)
            cnt += min(mid / i, m);
        if (cnt < k)
            l = mid + 1;
        else r = mid - 1, ans = mid;
    }
    cout << ans;
}