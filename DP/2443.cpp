#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(false);    cin.tie(NULL);  cout.tie(NULL);
    int t, k;   cin >> t >> k;  vector<long long int> dp(100010, 0), ans(1e5+10, 0);
    for(int i=0;k>i;i++){
        dp[i]=1;
    }
    for(int i=k;100005>=i;i++){
        dp[i]=(MOD+(MOD+dp[i-1])%MOD+(MOD+dp[i-k])%MOD)%MOD;
    }
    for(int i=1;100005>=i;i++){
        ans[i]=(MOD+(MOD+ans[i-1])%MOD+(MOD+dp[i]))%MOD;
    }
    for(int i=0;t>i;i++){
        int a, b;   cin >> a >> b;  cout << (MOD+ans[b]-ans[a-1])%MOD << "\n";
    }
}