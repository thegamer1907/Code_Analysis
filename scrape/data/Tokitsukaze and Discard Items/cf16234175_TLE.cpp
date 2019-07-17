#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll v[100000 + 7];
int main()
{
    ll n, m, k; cin >> n >> m >> k;
    ll l = 0; ll cnt = 0; ll page = k;
    for (ll i = 0; i < m; i++) cin >> v[i];
    while (l < m)
    {
        ll tim = l; bool flag = true;
        while ((v[l] - tim) <= page && l < m)
        {
            l++; flag = false;
        }
        if (flag)
        {
            ll p = (v[l] - tim) % k;
            if (p == 0) page = p;
            else page = ((v[l] - tim) / k + 1) * k;
        }
        else cnt++;
    }
    cout << cnt << endl;
    return 0;
}