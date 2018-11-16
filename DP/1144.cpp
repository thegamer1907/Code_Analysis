#include <bits/stdc++.h>
using namespace std;

const int MAXN = 110;
int n;
vector<int> ar(MAXN);
int dp[MAXN][MAXN], pre[MAXN];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> ar[i]; }
    memset(dp, -1, sizeof(dp));
    memset(pre, 0, sizeof(pre));
    for (int i = 0; i < n; ++i) {
        if (i == 0 && ar[i] == 1) { pre[i] = 1; }
        else if (ar[i] == 1) { pre[i] = pre[i-1]+1; }
        else { pre[i] = pre[i-1]; }
    }
    int ans = INT_MIN;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int onecnt = pre[n-1] - (pre[j] - pre[i] + ar[i]);
            int zerocnt = (j-i+1) - (pre[j] - pre[i] + ar[i]);
            ans = max(ans, onecnt + zerocnt);
        }
    }
    cout << ans << endl;
}