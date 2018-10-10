#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char s[105];
int need[3], have[3], price[3];
ll cook[3];
ll r;
inline bool check(ll x) {
    ll cur = r;
    for (int i = 0; i < 3; i++) {
        cook[i] = x * need[i];
        if (cook[i] && have[i] <= cook[i]) cur -= (cook[i] - have[i]) * price[i];
    }
    return cur >= 0;
}
int main() {
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == 'B') need[0]++;
        if (s[i] == 'S') need[1]++;
        if (s[i] == 'C') need[2]++;
    }
//    printf("<%d %d %d>\n", need[0], need[1], need[2]);
    scanf("%d%d%d", &have[0], &have[1], &have[2]);
    scanf("%d%d%d", &price[0], &price[1], &price[2]);
    scanf("%lld", &r);
    ll l = 0, r = 1e15, ans = 0;
    while (l <= r) {
        ll mid = l + r >> 1;
        if (check(mid)) {
            ans = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    printf("%lld\n", ans);
    return 0;
}
