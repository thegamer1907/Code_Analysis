#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

const ll INF = (ll)1e18;

int main()
{
    ll n; scanf("%lld", &n);

    vector<ll> a(n);

    for (ll i = 0; i < n; i++) scanf("%lld", &a[i]);

    ll res, minute = INF;

    for (ll i = 0; i < n; i++){
        ll   rounds = max(a[i] - i, 0LL) / n + (max(a[i] - i, 0LL) % n != 0LL);
        ll currTime = rounds * 1LL * n + i;
        if (minute > currTime) res = i, minute = currTime;
    }

    printf("%lld\n", res + 1);
    return 0;
}
