#include <bits/stdc++.h>
using namespace std;

long long dp[100000][2];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<string> v(n);
    vector<int> c(n);
    for(auto& x:c) cin>>x;
    for(auto& s:v) cin>>s;
    vector<string> vrev = v;
    for(auto& s:vrev) reverse(s.begin(), s.end());
    dp[0][1] = c[0];
    for(int i=1;i<n;++i) {
        dp[i][0] = dp[i][1] = LLONG_MAX;
        if(v[i] >= v[i-1])
            dp[i][0] = min(dp[i][0], dp[i-1][0]);
        if(v[i] >= vrev[i-1])
            dp[i][0] = min(dp[i][0], dp[i-1][1]);
        if(vrev[i] >= v[i-1])
            dp[i][1] = min(dp[i][1], dp[i-1][0]);
        if(vrev[i] >= vrev[i-1])
            dp[i][1] = min(dp[i][1], dp[i-1][1]);
        if(dp[i][1] < LLONG_MAX) dp[i][1] += c[i];
    }
    long long ans = min(dp[n-1][0], dp[n-1][1]);
    if(ans == LLONG_MAX) cout << "-1\n";
    else cout << ans << '\n';
}
