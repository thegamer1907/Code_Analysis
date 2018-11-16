#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define MX 100005
using namespace std;

ll dp[MX], l, r, tc, k, cum[MX], ans;

int main(int argc, char const *argv[]) {
	cin >> tc >> k;
    dp[0] = 1;
    for(int i=1;i<=100002;i++){
        if(i>=k) dp[i] = (dp[i-1]%mod + dp[i-k]%mod)%mod;
        else dp[i] = dp[i-1];
        cum[i] = (dp[i]%mod + cum[i-1]%mod)%mod;
    }
	while(tc--){
        cin >> l >> r;
        ans = ( (cum[r] - cum[l-1])+mod)%mod;
		cout << ans << endl;
	}

    return 0;
}
