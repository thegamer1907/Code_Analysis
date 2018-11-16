#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int limN = 5005;

ll sms[limN];
ll dp[limN][limN];

int main() {
    int N, M, K;
    scanf("%d%d%d", &N, &M, &K);
    for(int i=1, a; i<=N; i++) {
        scanf("%d", &a);
        sms[i] = sms[i-1] + a;
    }

    ll ans = 0;
    for(int i=M; i<=N; i++) {
        ll nv = sms[i] - sms[i-M];
        for(int j=1; j<=K; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i-M][j-1] + nv);
            ans = max(dp[i][j], ans);
        }
    }

    printf("%lld\n", ans);
}
