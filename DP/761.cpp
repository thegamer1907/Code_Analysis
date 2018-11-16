#include <bits/stdc++.h>

using namespace std;

const int MAX = 123;
int n, a[MAX], b[MAX], c[MAX], one, mx;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i]) ++one;
    }
    if (one == n) {
        cout << n - 1 << '\n';
        return 0;
    }
    mx = b[0] = 1 - a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i]) {
            b[i] = max(0, b[i-1] - 1);
        } else {
            b[i] = b[i-1] + 1;
        }
        mx = max(mx, b[i]);
    }
    cout << one + mx << '\n';
    return 0;
}
