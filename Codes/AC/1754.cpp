#include <iostream>

using namespace std;
using ll = long long;

ll n, m;

ll f(ll x)
{
    ll i = n;
    ll sum = 0;
    for (ll j = 1; j <= m; j++)
    {
        while (i * j >= x) i--;
        sum += i;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll k;
    cin >> n >> m >> k;

    ll lo = 1, hi = n * m;
    while (hi - lo > 1)
    {
        ll mid = lo + hi >> 1;
        if (f(mid) < k) lo = mid;
        else hi = mid;
    }
    if (f(hi) < k) cout << hi << "\n";
    else cout << lo << "\n";
}
