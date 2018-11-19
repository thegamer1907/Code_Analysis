#include <bits/stdc++.h>
using namespace std;

int n;
int main()
{
    double h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h += (m / 60) + (s / (60 * 60));
    m += (s / 60);
    bool ok = 1;
    int t = t1;
    bool dir = 1;
    while (t != t2) {
        if (t == h) ok = 0;
        int meh = t + 1;
        //if (meh > 12) meh = 1;
        if (t < h && meh > h) {
            ok = 0;
            break;
        }
        t++;
        if (t > 12) t -= 12;
    }
    if (!ok) {
        dir = 0;
    }
    //cout << h << " " << dir << "\n";
    t = (t1 * 60) / 12;
    if (t == 60) t = 0;
    int tmpt2 = (t2 * 60) / 12;
    if (tmpt2 == 60) tmpt2 = 0;
    //cout << t << " " << tmpt2 << "\n";
    ok = 1;
    if (dir) {
        while (t != tmpt2) {
            if (t == m) ok = 0;
            int meh = t + 1;
            if (t < m && meh > m) {
                ok = 0;
                break;
            }
            t++;
            if (t == 60) t = 0;
        }
        t = (t1 * 60) / 12;
        if (t == 60) t = 0;
        while (t != tmpt2) {
            if (t == s) ok = 0;
            t++;
            if (t == 60) t = 0;
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    else {
        while (t != tmpt2) {
            if (t == m) ok = 0;
            int meh = t - 1;
            if (t > m && meh < m) {
                ok = 0;
                break;
            }
            t--;
            if (t == -1) t = 59;
        }
        t = (t1 * 60) / 12;
        if (t == 60) t = 0;
        while (t != tmpt2) {
            if (t == s) ok = 0;
            t--;
            if (t == -1) t = 59;
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
