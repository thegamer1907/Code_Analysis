#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m, k, ans;
ll a[100009];
bool cmp(ll x, ll y) { return x < y; }
int main()
{
    scanf("%lld%lld%lld", &n, &m, &k);
    for (ll i = 0; i < m; i++)
    {
        scanf("%lld", &a[i]);
    }
    sort(a, a + m, cmp);
    ll tmp = 0, x = a[0] / k, ge = 0;
    ll r = 0;
    ans = 0;
    while (r < m)
    {
        ans++;
        ll s = ceil(double(a[r] * 1.0 - tmp * 1.0) / (double(k)));
        //printf("S: %lld  R: %lld TMP:%lld\n",s,r,tmp);
        if ((a[r] - tmp) / k * k == (a[r] - tmp))
        {
            s = (a[r] - tmp) / k;
        }
        while (ceil(double(a[r] * 1.0 - tmp * 1.0) / double(k)) == s && r < m)
        {
            //printf("RR:%lld\n",r);
            ge++;
            r++;
        }
        //printf("R::%lld\n",r);
        if (r > m - 1)
            break;
        tmp += ge;
        ge = 0;
    }
    printf("%lld\n", ans);
    return 0;
}

/*16 7 5
2 3 4 5 6 15 16 */