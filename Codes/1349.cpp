#pragma GCC optimize ("O3")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define ENGZ ios::sync_with_stdio(0);cin.tie(0);ios_base::sync_with_stdio(0);

int main()
{
    ENGZ
    ll a[100005], n, k, c, ans, t, high, low = 0, mid;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    high = n;
    while (high >= low)
    {
        vector<ll> v;
        t = 0;
        mid = (high + low) / 2;
        for (int i = 0; i < n; i++)
            v.push_back(a[i] + (i + 1) * mid);
        sort(v.begin(), v.end());
        for (int i = 0; i < mid; i++)
            t += v[i];
        if (t <= k)
            low = mid + 1, c = mid, ans = t;
        else
            high = mid - 1;
    }
    cout << c << " " << ans;
    return 0;
}
