#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m, k, ans;
ll a[100009];

ll egg(ll x,ll tmp)
{
    if((x-tmp)/k*k==x-tmp)
    {
        return (x-tmp)/k;
    }
    else
    {
        return (x-tmp)/k+1;
    }
    
}

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
        ll s = egg(a[r],tmp);
        //printf("S: %lld  R: %lld TMP:%lld\n",s,r,tmp);
        if ((a[r] - tmp) / k * k == (a[r] - tmp))
        {
        //    s = (a[r] - tmp) / k;
        }
        while (egg(a[r],tmp) == s && r < m)
        {
            //printf("RR:%lld, \n",r);
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

/*1000000000000000000 5 394779268306930211
394779268306930211
394779268306930212
394779268306930213
394779268306930214
394779268306930215 */