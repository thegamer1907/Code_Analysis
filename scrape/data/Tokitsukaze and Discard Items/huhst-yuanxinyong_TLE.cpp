#include <bits/stdc++.h>
const int maxn = 1e5 + 50;
using namespace std;
typedef long long ll;

ll a[maxn];

int main()
{
    ll n, m, k;
    scanf("%lld%lld%lld", &n, &m, &k);
    for (int i = 1; i <= m; i++)
        scanf("%lld", &a[i]);
    ll l = 1, r = k;
    int ans = 0, pos = 1;
    while(l<=n){
        int ge = 0;
        while(pos<=m && a[pos]<=r){
            pos++;
            ge++;
        }
        if(ge)
            ans++;
        if(pos > m)
            break;
        r += ge;
        if(ge == 0){
            l = r + 1;
            l = l + ((a[pos] - l - 1) / k) * k;
            r = l + k - 1;
        }
    }
    printf("%d\n", ans);
    return 0;
}