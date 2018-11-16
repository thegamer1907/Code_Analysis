#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
const int N = 1e5 + 5, MOD = 1e9 + 7;

int n, dp[N], pre[N];



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, k;
    cin>>t>>k;

    dp[0] = 1;
    dp[1] = 1;

    for(int i = 1; i < N; i++){
        if(i < k)   dp[i] = 1;
        else        dp[i] = (dp[i-1] + dp[i - k])%MOD;
    }

    for(int i = 1; i < N; i++){
        if(i == 1)  pre[i] = dp[i];
        else        pre[i] = (pre[i-1] + dp[i])%MOD;;
    }
    pre[0] = 0;
    while(t--){
        int a, b;
        cin>>a>>b;
        cout<<(pre[b] - pre[a-1] + 2*MOD)%MOD<<"\n";

    }


    return 0;
}

