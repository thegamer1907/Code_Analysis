#include<bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, x, maxX;
    cin >> n >> m >> x;
    maxX = x;
    int total = 0;
    for (int i = 1; i < n; ++i) {
        cin >> x;
        if (x > maxX) {
            total += i * (x - maxX);
            maxX = x;
        } else {
            total += (maxX - x);
        }
    }
    if (m <= total) {
        cout << maxX << " " << maxX + m;
    } else {
        cout << maxX + ceil(1.0 * (m-total) / n) << " " << maxX + m;
    }
    return 0;
}