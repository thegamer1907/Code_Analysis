#include <bits/stdc++.h>

using namespace std;

typedef long double ld;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    if (t1 > t2) {
        swap(t1, t2);
    }
    int intersect = 0;
    if (h >= t1 && h <= t2 - 1) {
        ++intersect;
    }
    t1 *= 5, t2 *= 5;
    if (m >= t1 && m <= t2 - 1) {
        ++intersect;
    }
    if (s >= t1 && s <= t2 - 1) {
        ++intersect;
    }
    intersect %= 3;
    if (!intersect) cout << "YES" << endl; else cout << "NO" << endl;
    return 0;
}

