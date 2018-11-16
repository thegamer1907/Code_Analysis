#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    int l = 0, r = n;
    --a;
    --b;
    if (a > b) swap(a, b);
    int now = 0;
    while (n > 0) {
        now++;
        n = (n >> 1);
    }
    int f = now - 1;
    while (l <= a && b < r) {
        --now;
        int m = (l + r) / 2;
        if (a < m) r = m;
        else l = m;
    }
    if (now == f) cout << "Final!" << endl;
    else cout << now << endl;
    return 0;
}
