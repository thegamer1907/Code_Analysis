#include <bits/stdc++.h>
using ll = int64_t;
using ld = long double;
using namespace std;

int a, b;

bool f1 = false, f2 = false;

void w(ld x) {
    if ((x >= a) && (x <= b)) f2 = true;
    else f1 = true;
}

int main() {
#ifdef PAUNSVOKNO
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cout.setf(ios::fixed); cout.precision(20);
    int h, m, s;
    cin >> h >> m >> s >> a >> b;

    if (h == 12) h = 0;
    if (a == 12) a = 0;
    if (b == 12) b = 0;

    if (a > b) {
        swap(a, b);
    }

    w(s / 5.0);
    w((m + ld(s) / 60) / 5.0);
    w(h + ld(m) / 60.0 + ld(s) / 60.0 / 60.0);

    cout << ((f1 && f2) ? "NO\n" : "YES\n");
}