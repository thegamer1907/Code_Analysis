#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define ENGZ ios::sync_with_stdio(0);cin.tie(0);ios_base::sync_with_stdio(0);cout.tie(0);

ll n, m, k, x, s, ans;
pair<ll, ll> a[200005], b[200005];

ll bs(ll req)
{
    ll high = k - 1, low = 0, mid, ret = 0;
    while (high >= low)
    {
        mid = (high + low) / 2;
        if (b[mid].second <= req)
            ret = b[mid].first, low = mid + 1;
        else
            high = mid - 1;
    }
    return ret;
}

int main()
{
    ENGZ
    cin >> n >> m >> k >> x >> s;
    for (int i = 0; i < m; i++)
        cin >> a[i].first;
    for (int i = 0; i < m; i++)
        cin >> a[i].second;
    for (int i = 0; i < k; i++)
        cin >> b[i].first;
    for (int i = 0; i < k; i++)
        cin >> b[i].second;
    ans = n * x;
    for (int i = 0; i < k; i++)
        if (b[i].second <= s)
            ans = min(ans, (n - b[i].first) * x);
    for (int i = 0; i < m; i++)
    {
        if (a[i].second > s)
            continue;
        ans = min(ans, min(a[i].first * n, a[i].first * (n - bs(s - a[i].second))));
    }
    cout << max(ans, ll(0));
    return 0;
}
