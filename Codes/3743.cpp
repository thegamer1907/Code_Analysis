#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL b, s, c, nb, ns, nc, pb, ps, pc, r;
bool chk(LL x) {
    return r >= pb * max(b * x - nb, 0LL) + ps * max(s * x - ns, 0LL) + pc * max(c * x - nc, 0LL);
}
int main() {
    string str;
    cin >> str;
    for (auto i : str) {
        if (i == 'B') b++;
        if (i == 'S') s++;
        if (i == 'C') c++;
    }
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
    LL lo = 0, hi = 2e12, mid;
    while (lo < hi) {
        mid = lo + (hi - lo + 1) / 2;
        if (chk(mid))
            lo = mid;
        else
            hi = mid - 1;
    }
    cout << lo << endl;
    return 0;
}