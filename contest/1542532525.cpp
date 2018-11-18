#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf ((ll)1e15)

ll total;
int L, R = -1;
vector<ll> arr, cnt;
vector<vector<ll> > dp, opt;

ll cost(int l, int r) {
    if (l > r) {
        return inf;
    } else {
        while (R < r) total += cnt[arr[++R]]++;
        while (L > l) total += cnt[arr[--L]]++;
        while (R > r) total -= --cnt[arr[R--]];
        while (L < l) total -= --cnt[arr[L++]];
        return total;
    }
}

void get_dp(int k, int l, int r, int opt_l, int opt_r) {
    if (l <= r) {
        int mid = (l+r)/2;
        dp[k][mid] = inf;
        for (int i = opt_l; i <= opt_r; ++i) {
            if (dp[k-1][i]+cost(i+1, mid) <= dp[k][mid]) {
                dp[k][mid] = dp[k-1][i]+cost(i+1, mid);
                opt[k][mid] = i;
            }
        }
        get_dp(k, l, mid-1, opt_l, opt[k][mid]);
        get_dp(k, mid+1, r, opt[k][mid], opt_r);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, K;
    cin >> n >> K;
    arr.resize(n);
    cnt.resize(n+1);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    dp.resize(K+1, vector<ll>(n));
    opt.resize(K+1, vector<ll>(n));
    for (int i = 0; i < n; ++i) {
        dp[1][i] = cost(0, i);
    }
    for (int k = 2; k <= K; ++k) {
        get_dp(k, 0, n-1, 0, n-1);
    }
    cout << dp[K][n-1] << '\n';
}