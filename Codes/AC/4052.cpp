#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int **arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int *maxmax = new int[n]();
    maxmax[0] = 1;
    for (int i = 0; i < m; i++) {
        int *dp = new int[n]();
        dp[0] = 1;
        for (int j = 1; j < n; j++) {
            if (arr[j][i] >= arr[j - 1][i])dp[j] = dp[j - 1] + 1;
            else dp[j] = 1;
            maxmax[j] = max(maxmax[j], dp[j]);
        }
        delete dp;
    }
    int k;
    cin >> k;
    while (k--) {
        int l, r;
        cin >> l >> r;
        if (maxmax[r - 1] >= r - l + 1)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
