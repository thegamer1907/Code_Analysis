#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int x[N], h[N];

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    int ans = 2;
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> h[i];
    }
    int left = x[0];
    for (int i = 1; i < n - 1; ++i) {
        if (left < (x[i] - h[i])) {
            ++ans;
            left = x[i];
        } else if ((x[i] + h[i]) < x[i + 1]) {
            ++ans;
            left = x[i] + h[i];
        } else {
            left = x[i];
        }
    }
    cout << ans << endl;
    return 0;
}