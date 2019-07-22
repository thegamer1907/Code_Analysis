#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n, m, k;
ll p[100100];

int main()
{
    scanf("%lld%lld%lld", &n, &m, &k);
    for (int i = 0; i < m; ++i)
        scanf("%lld", &p[i]), --p[i];
    ll curOff = 0;
    ll ans = 0, tmp;
    for (int i = 0; i < m; ++i)
    {
        if (p[i]-curOff >= k)
        {
            curOff += (p[i]-curOff)/k * k;
        }
        tmp = 0;
        while (i < m && p[i]-curOff < k) ++i, ++tmp;
        ++ans;
        curOff += tmp;
        --i;
    }
    printf("%lld\n", ans);

    return 0;
}