//2017-10-05-15.20
//B

#include <bits/stdc++.h>
using namespace std;


const int mod = 12 * 60 * 60;

int main() {
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h *= (60 * 60);
    h += m * 60;
    h += s;
    h %= mod;
    m *= (12 * 60);
    m += s;
    m %= mod;
    s *= 12 * 60;
    bool f1, f2;
    f1 = f2 = 1;
    t1 *= 60 * 60;
    t1 %= mod;
    t2 *= 60 * 60;
    t2 %= mod;
    //cout << h << " " << m << " " << s << " " << t1 << " " << t2 << endl;
    for (int i = t1;; i++) {
        i %= mod;
        if (i == h || i == s || i == m) {
            f1 = 0;
            //cout << i << endl;
            break;
        }
        if (i == t2) break;
    }
    for (int i = t1; i != t2; i--) {
        if (i == h || i == s || i == m) {
            f2 = 0;
            break;
        }
        if (i == 0) i = mod - 1;
    }
    if (f1 || f2) puts("YES");
    else puts("NO");
}
