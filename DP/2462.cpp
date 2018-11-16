#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long dp[100005];
int main(){
    long long t,k,a,b;
    cin >> t >> k;
    dp[0] = 1;
    for(long i = 1; i <= 100000; i++){
        dp[i] = (dp[i]+dp[i-1])%mod;
        if(i >= k){
            dp[i] = (dp[i]+dp[i-k])%mod;
        }
    }
    for(long i = 1; i <= 100000; i++){
        dp[i] = (dp[i]+dp[i-1])%mod;
    }
    while(t--){
        cin >> a >> b;
        long long ans = dp[b]-dp[a-1];
        if(ans < 0){
            ans += mod;
        }
        cout << ans << endl;
    }
}
