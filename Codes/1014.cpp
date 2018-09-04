#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 1;
    for (char c = 'a'; c <= 'b'; ++c) {
        vector <int> bad(n, 0);
        for (int i = 0; i < n; ++i) {
            if (s[i] != c) {
                bad[i]++;
            }
            if (i > 0) {
                bad[i] += bad[i - 1];
            }
        }
        int L = 0;
        int R = n + 1;
        while (R - L > 1) {
            int M = (L + R) / 2;
            bool fl = false;
            for (int i = 0; i + M - 1 < n; ++i) {
                if (bad[i + M - 1] - (i == 0 ? 0 : bad[i - 1]) <= k) {
                    fl = true;
                }
            }
            if (fl) {
                L = M;
            } else {
                R = M;
            }
        }
        ans = max(ans, L);
    }
    cout << ans;
    return 0;
}
