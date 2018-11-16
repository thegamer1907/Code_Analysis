#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5+5, inf = 1e18;
int A[N], dp[N][2], n;
string S[N], SR[N];
int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> n;
    for(int i=0;i<N;i++) dp[i][0] = dp[i][1] = inf;
    for(int i=1;i<=n;i++) cin >> A[i];
    for(int i=1;i<=n;i++) cin >> S[i];
    for(int i=1;i<=n;i++) SR[i] = S[i];
    for(int i=1;i<=n;i++) reverse(SR[i].begin(), SR[i].end());
    dp[1][0] = 0; dp[1][1] = A[1];
    for(int i=2;i<=n;i++){
        if(S[i]>=S[i-1]) dp[i][0] = min(dp[i][0], dp[i-1][0]);
        if(S[i]>=SR[i-1]) dp[i][0] = min(dp[i][0], dp[i-1][1]);
        if(SR[i]>=S[i-1]) dp[i][1] = min(dp[i][1], dp[i-1][0]+A[i]);
        if(SR[i]>=SR[i-1]) dp[i][1] = min(dp[i][1], dp[i-1][1]+A[i]);
    }
    if(min(dp[n][0], dp[n][1])>=inf) return !printf("-1");
    printf("%lld", min(dp[n][0], dp[n][1]));
}
