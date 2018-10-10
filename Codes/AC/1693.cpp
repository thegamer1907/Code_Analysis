#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, m, k;

ll f(ll x)
{
    ll ans = 0LL;
    for (int i = 1; i <= n; i++)
        ans += min(m, x/i);
    return ans;
}

ll busca(void)
{
    ll ini = 1LL, fim = n*m-1;
    while (ini <= fim)
    {
        ll mid = (ini+fim)>>1;

        if (f(mid) < k && f(mid+1) < k) ini = mid+1;
        else if (f(mid) < k && f(mid+1) >= k) return mid;
        else if (f(mid) >= k) fim = mid-1;
    }
    return 0;
}

int main(void)
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n >> m >> k;

    cout << busca()+1 << "\n";
}
