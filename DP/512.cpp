#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n, q, l, r;
    string s;

    cin >> s;
    cin >> q;

    n = s.size();

    vector<int> dp(n + 1, 0);

    for (int i = 0; i < n - 1; ++i){
        if(s[i] == s[i + 1]){
            dp[i + 1]++;
        }
        dp[i + 1] += dp[i];
    }
    dp[n] = dp[n-1];

    while(q--){
        cin >> l >> r;
        cout << dp[r - 1] - dp[l] + (s[l - 1] == s[l]) << '\n';
    }

}
