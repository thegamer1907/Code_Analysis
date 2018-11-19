#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;
    h = h % 12 * 5;
    t1 = t1 % 12 * 5;
    t2 = t2 % 12 * 5;


    h *= 2;
    m *= 2;
    s *= 2;
    t1 *= 2;
    t2 *= 2;

    if (s != 0) {
        m++;
    }

    if ((s != 0) || (m!=0)) {
        h++;
    }

    // cout << "T: " << h << " " << m << " " << s << " " << t1 << " " << t2 << endl;

    bool can = false;
    for (int i = t1;; i = (i+1)%120) {
        if (h == i || m == i || s == i) {
            break;
        }
        if (i == t2) {
            can = true;
            break;
        }
    }

    for (int i = t2;; i = (i+1)%120) {
        if (h == i || m == i || s == i) {
            break;
        }
        if (i == t1) {
            can = true;
            break;
        }
    }

    cout << (can ? "YES\n" : "NO\n");
    return 0;
}
