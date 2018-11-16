#include <bits/stdc++.h>

using namespace std;

const int MAX = 123;
int n, a[MAX], b[MAX], c[MAX], one, ans;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i]) ++one;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            int cnt = 0;
            for (int k = j; k <= i; ++k) {
                cnt += (a[k] ? -1 : 1);
            }
            ans = max(ans, one + cnt);
        }
    }
    cout << ans << '\n';
    return 0;
}
