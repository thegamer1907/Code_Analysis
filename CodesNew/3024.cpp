#include <bits/stdc++.h>
#define in freopen ("input.txt", "r", stdin);
#define out freopen("output.txt", "w", stdout);
#define ll long long int

const int val = (1e6) + 5;
const int INF = (1e9) + 7;
double eps = 0.000000001;

using namespace std;

string s;

long long dp[val];

int solve(){
    int n, k;
    cin >> k >> s;
    n = s.size();
    for(int i=0; i<n; ++i){
        dp[i+1] = dp[i];
        if(s[i] == '1') ++ dp[i+1];
    }
    long long ans = 0;
    for(int i=1; i<=n; ++i){
        int l1 = i, r1 = n;
        while(l1 < r1){
            int m1 = (l1 + r1) / 2;
            if(dp[m1] - dp[i-1] > k){
                r1 = m1;
            }
            else l1 = m1 + 1;
        }
        if(dp[l1] - dp[i-1] > k) -- l1;
        int l2 = i, r2 = n;
        while(l2 < r2){
            int m2 = (l2 + r2) / 2;
            if(dp[m2] - dp[i-1] > k - 1){
                r2 = m2;
            }
            else l2 = m2 + 1;
        }
        if(dp[l1] - dp[i-1] == k){
            ans += (l1 - l2 + 1);
        }
    }
    cout << ans << endl;
}

int main(){
    //in out
	ios_base::sync_with_stdio(0);
    solve();
    return 0;
}
