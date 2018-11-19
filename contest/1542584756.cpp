#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long double h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    t1 *= 5;
    t2 *= 5;
    h *= 5;
    if (t1 == 60) t1 = 0;
    if (t2 == 60) t2 = 0;
    if (h == 60) h = 0;
    long double a[3];
    a[0] = s;
    if (a[0] == 60.0) a[0] = 0.0;
    a[1] = m + s / 60.0;
    if (a[1] == 60.0) a[1] = 0.0;
    a[2] = h + a[1] / 12.0;
    if (a[2] == 60.0) a[2] = 0.0;
    sort(a, a + 3);
    for (int i = 0; i < 2; i++) {
        if (t1 > a[i] && t1 < a[i + 1] && t2 > a[i] && t2 < a[i + 1]) {
            cout << "YES" << endl;
            return 0;
        }
    }
    if ((t1 > a[2] || t1 < a[0]) && (t2 > a[2] || t2 < a[0])) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}