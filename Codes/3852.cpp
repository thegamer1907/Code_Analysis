#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <map>

using namespace std;

typedef long long ll;

int main() {
    string s;
    cin >> s;
    int xb = 0, xs = 0, xc = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'B') {
            xb++;
        } else if (s[i] == 'S') {
            xs++;
        } else {
            xc++;
        }
    }
    int nb, ns, nc;
    cin >> nb >> ns >> nc;
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    ll k;
    cin >> k;
    ll l = 0, r = k + 200;
    while (l < r) {
        ll m = (l + r + 1) / 2;
        ll kb = m * xb - nb, ks = m * xs - ns, kc = m * xc - nc;
        if (kb < 0) {
            kb = 0;
        }
        if (ks < 0) {
            ks = 0;
        }
        if (kc < 0) {
            kc = 0;
        }
        if (kb * pb + ks * ps + kc * pc > k) {
            r = m - 1;
        } else {
            l = m;
        }
    }
    cout << l << endl;
}
