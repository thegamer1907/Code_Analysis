#include <iostream>

using namespace std;

const int MOD = 1e8, N = 1e5 + 4;

int n, k, dp[N];
string s;

bool check(int d){
    for(int i = 0; i <= n - d; i++){
        int need = dp[i + d - 1];
        if(i > 0)
            need -= dp[i - 1];
        need = min(need, d - need);
        if(need <= k){
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k >> s;
    if(s[0] == 'a'){
        dp[0] = 1;
    }
    for(int i = 1; i < n; i++){
        dp[i] = dp[i - 1];
        if(s[i] == 'a')
            dp[i]++;
    }
    int l = 1;
    int r = n + 1;
    while (l + 1 < r){
        int m = (l + r) / 2;
        if(check(m)){
            l = m;
        } else
            r = m;
    }
    cout << l;
    return 0;
}