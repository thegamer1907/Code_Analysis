#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    char *str = new char[101];
    scanf("%s", str);
    ll cnt[3];
    memset(cnt, 0ll, sizeof(cnt));
    for (unsigned int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'B')
            cnt[0]++;
        else if (str[i] == 'C')
            cnt[1]++;
        else
            cnt[2]++;
    }
    ll b, s, c;
    scanf("%I64d %I64d %I64d", &b, &s, &c);
    ll ans;
    if (cnt[0] == 0 || cnt[1] == 0 || cnt[2] == 0)
        ans = 0ll;
    else
        ans = 1ll * min(b / cnt[0], min(c / cnt[1], s / cnt[2]));
    b -= ans * cnt[0];
    c -= ans * cnt[1];
    s -= ans * cnt[2];
    ll pb, ps, pc;
    scanf("%I64d %I64d %I64d", &pb, &ps, &pc);
    ll r;
    scanf("%I64d", &r);
    ll lo = 0, hi = 2000000010005;
    while (lo <= hi)
    {
        ll mid = (lo + hi) >> 1;
        ll t1 = pb * max(mid * cnt[0] - b, 0ll);
        ll t2 = pc * max(mid * cnt[1] - c, 0ll);
        ll t3 = ps * max(mid * cnt[2] - s, 0ll);
        if (t1 + t2 + t3 <= r)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    ans += hi;
    printf("%I64d\n", ans);
    return 0;
}
