#include <bits/stdc++.h>

#pragma GCC optimize("-O3")

using namespace std;

int64_t n, x, y, cur_round = 1;

int match(int a, int b) {
    if ((a == x) && (b == y)) {
        cout << cur_round;
        exit(0);
    }
    if (a == x || a == y) {
        return a;
    }
    if (b == y ||b == x) {
        return b;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin >> n >> x >> y;
    if (x > y) swap(x, y);
    vector <int> a(n, 0);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    vector <int> cur;
    while (a.size() > 2) {
        int cur_size = a.size();
        for (int i = 0; i < cur_size; i += 2) {
            int v = match(a[i], a[i + 1]);
            cur.push_back(v);
        }
        a = cur;
        cur.clear();
        cur_round++;
     }
     cout << "Final!";
    return 0;
}