#include <iostream>

using namespace std;

const int N = 1e5 + 10;
int dp[N];

int main()
{
    string s; cin >> s;
    dp[0] = 0;
    int n = s.size();
    for (int i = 1; i < n; i ++){
        dp[i] = dp[i - 1];
        if (s[i] == s[i - 1]){
            dp[i] ++;
        }
    }
    int m; cin >> m;
    for (int i = 0; i < m; i ++){
        int l, r; cin >> l >> r;
        int ans = dp[r - 1] - dp[l - 2];
        if (s[l - 2] == s[l - 1]){ans --;}
        cout << ans << endl;
    }
}
