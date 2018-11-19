#include <bits/stdc++.h>
#define N 300006
#define mod 1000000007
#define MX (60 * 60 * 12)
#define oo 2000000000
#define noo -2000000000
using namespace std;
int h, m, s, t1, t2, a[MX + 30];

int main() {
    scanf("%d%d%d %d%d", &h, &m, &s, &t1, &t2);
    h = (h * 3600) + (m * 60) + s;
    m = (m * 60 * 12) + s;
    s = (s * 60 * 12);
    t1 = t1 * 3600;
    t2 = t2 * 3600;
    t1 %= MX;
    t2 %= MX;
    s %= MX;
    h %= MX;
    m %= MX;
    a[m] = a[s] = a[h] = 1;
    bool y = false;
    for (int i = t1;; i = (i + 1) % MX) {
        if (a[i])
            break;
        if (i == t2) {
            y = 1;
            break;
        }
    }
    for (int i = t1;; i = (i - 1 + MX) % MX) {
        if (a[i])
            break;
        if (i == t2) {
            y = 1;
            break;
        }
    }
    printf(y ? "YES\n" : "NO\n");
    return 0;
}
