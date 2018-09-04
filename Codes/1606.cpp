#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const int N = 100005;

int n, s;
ll a[N], tmp[N];

ll calc(int x)
{
    for(int i = 1; i <= n; ++i)
        tmp[i] = a[i] + i * x;
    sort(tmp + 1, tmp + n + 1);
    ll sum = 0;
    for(int i = 1; i <= x; ++i)
        sum += tmp[i];
    return sum;
}

bool check(int x)
{
    ll ans = calc(x);
    if(ans == -1 || ans > s) return false;
    return true;
}

int main()
{
    scanf("%d%d", &n, &s);
    for(int i = 1; i <= n; ++i)
        scanf("%lld", &a[i]);
    int l = 0, r = min(n, 2000);
    while(r - l > 1)
    {
        int m = (l + r) >> 1;
        if(check(m)) l = m;
        else r = m;
    }
    if(check(r)) l = r;
    printf("%d %lld\n", l, calc(l));
    return 0;
}
