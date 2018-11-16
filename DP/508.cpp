#include<bits/stdc++.h>
using namespace std;

string s;
int n, l, r;
int dp[100005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> s >> n;

    int len = s.length();
    for (int i=1; i<len; i++) {
        dp[i] = dp[i-1];
        if (s[i] == s[i-1]) {
            dp[i]++;
        }
    }

    for (int i=0; i<n; i++) {
        cin >> l >> r;
        cout << dp[r-1] - dp[l-1] << endl;
    }
    return 0;
}
