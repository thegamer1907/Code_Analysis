#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> a(n);
    int min_val = 1e9;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        min_val = min(min_val, a[i]);
    }
    for (int& x: a) {
        x -= min_val;
    }

    int pos = min_val % n;
    int t = 1;
    while (a[pos] >= t) {
        a[pos] -= t++;
        pos = (pos + 1) % n;
    }
    cout << pos + 1;

    return 0;
}
