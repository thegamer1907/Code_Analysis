#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 1;

bool bl[N];
long long mark[N], arr[N], dp[N];

int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        arr[x]++;
    }
    for (int i = 2; i < N; i++) {
        if (!bl[i]) {
            mark[i] += arr[i];
            for (int j = i + i; j < N; j += i) {
                mark[i] += arr[j];
                bl[j] = 1;
            }
        }
    }
    for (int i = 1; i < N; i++) {
        dp[i] = dp[i - 1] + mark[i];
    }
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int l, r; cin >> l >> r;
        cout << dp[min(r, N - 1)] - dp[min(l - 1, N - 1)] << endl;
    }
    return 0;
}
