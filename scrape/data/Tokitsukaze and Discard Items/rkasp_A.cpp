#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define x first
#define y second
#define pii pair<int,int>



int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,m,k;
    cin >> n >> m >> k;
    vector <ll> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];
    ll cnt = 0;
    ll pl = 1;
    ll ans = 0;
    ll i = 0;
    ll cur = 0;
    while (i < m)
    {
        if (v[i] - cnt <= 1ll*pl*k)
        {
            cur++;
            i++;
        }
        else if (cur != 0)
        {
            cnt += cur;
            cur = 0;
            ans++;
        }
        else
        {
            pl = (v[i]-cnt)/k + ((v[i]-cnt) % k != 0) ;
        }
    }
    if (cur != 0)
    {
        ans++;
    }
    cout << ans;
    return 0;
}