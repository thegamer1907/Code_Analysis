#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<long long> dp(n + 1);
    for (int i = 1; i <= n; i++) 
        dp[i] = dp[i - 1] + a[i];

    long long sum = dp[n];
    if (sum % 3 != 0) {
        cout << "0\n";
        return 0;
    }
    long long answer = 0, pref = 0;
    sum /= 3;

    for (int i = 1; i < n; i++) {
        answer += pref * ((dp[n] - dp[i]) == sum);
        pref += (sum == dp[i]);
    }

    cout << answer << "\n";

    return 0;
}
