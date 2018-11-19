#include <bits/stdc++.h>

using namespace std;

const int mod = 60*60*60;
double toH (int tm) {
    return 12.0*tm/mod;
}

int main() {
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    set<int> hands;
    hands.insert(60*60*s);
    hands.insert(60*60*m + 60*s);
    hands.insert(60*60*5*(h%12) + 60*m + s);
    t1 = (t1%12)*60*60*5;
    t2 = (t2%12)*60*60*5;

    //for (auto v : hands) { cout << toH(v) << endl; }

    bool ok = false;
    for (int dt = -1; dt < 2; dt += 2) {
        int curT = t1;
        while (true) {
            if (curT == t2) {
                ok = true;
            }
            if (hands.count(curT) > 0) {
                break;
            }
            curT = (mod + curT + dt) % mod;
            //cout << toH(curT) << endl;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;

}
