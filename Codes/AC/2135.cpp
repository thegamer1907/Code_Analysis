#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, int> P;
const int N = 200007;
const int INF = 0x3f3f3f3f;

int n, k, n1, n2;
ll a1[N], a2[N], sum[N];
P b[N];

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        ll x;
        scanf("%I64d", &x);
        if (x >= 0) a1[n1++] = x;
        else a2[n2++] = -x;
//        else zero++;
    }
//    printf("%d %d\n", n1, n2);

    ll ans = 0;
    {
        for (int i = 0; i < n1; i++) {
            b[i] = make_pair(a1[i], i);
        }
        sort(b, b + n1);
        memset(sum, 0, sizeof(sum));
        for (int i = n1 - 2; i >= 0; i--) {
            int p1 = lower_bound(b + i + 1, b + n1, make_pair(b[i].first * k, b[i].second)) - b;
            int p2 = upper_bound(b + i + 1, b + n1, make_pair(b[i].first * k, INF)) - b;
            ans += sum[p1] - sum[p2];
            sum[i] = (ll)p2 - p1 + sum[i + 1];
        }
    }
    {
        for (int i = 0; i < n2; i++) {
            b[i] = make_pair(a2[i], i);
        }
        sort(b, b + n2);
        memset(sum, 0, sizeof(sum));
        for (int i = n2 - 2; i >= 0; i--) {
            int p1 = lower_bound(b + i + 1, b + n2, make_pair(b[i].first * k, b[i].second)) - b;
            int p2 = upper_bound(b + i + 1, b + n2, make_pair(b[i].first * k, INF)) - b;
            ans += sum[p1] - sum[p2];
            sum[i] = (ll)p2 - p1 + sum[i + 1];
        }
    }
//    ans += (ll)zero * (zero - 1) * (zero - 2) / 6;

    printf("%I64d\n", ans);

    return 0;
}
