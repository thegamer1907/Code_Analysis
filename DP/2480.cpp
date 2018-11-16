#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
const ll mod = 1000000007;
const int maxn = 100100;
ll dp[maxn], dppref[maxn], q, k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>q>>k;

    dp[0] = 1LL;
    for(int i=1;i<maxn;i++) {
        dp[i] = dp[i-1];
        if(i - k >= 0) dp[i] += dp[i-k];
        dp[i] %= mod;
        dppref[i] = dppref[i-1] + dp[i];
        dppref[i] %= mod;
        //cout<<i<<": "<<dp[i]<<"\n";
    }

    ll li, ri;
    while(q--) {
        cin>>li>>ri;
        ll result = ( dppref[ri] + mod - dppref[li-1] ) % mod;
        cout<<result<<"\n";
    }

    return 0;
}
