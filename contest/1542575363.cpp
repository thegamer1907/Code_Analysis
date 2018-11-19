#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <map>
#include <set>
#define pb push_back
#define MS(x, y) memset(x, y, sizeof(x))
#define FILER freopen("data.in", "r", stdin)
#define FILEW freopen("data.out", "w", stdout)
using namespace std;
typedef long long LL;

double h, m, s, t1, t2;

bool ok(double L, double R) {
    if (L <= t1 && t1 <= R && L <= t2 && t2 <= R) return true;
    return false;
}

bool check(double a[]) {
    sort(a, a + 3);
    if (ok(a[0], a[1])) return true;
    if (ok(a[1], a[2])) return true;
    if (t1 < a[2]) t1 += 60;
    if (t2 < a[2]) t2 += 60;
    if (ok(a[2], a[0]+60)) return true;
    return false;
}

int main() {
    while (scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2) == 5) {
        h *= 5;
        t1 *= 5;
        t2 *= 5;
        if (t1 == 60) t1 = 0;
        if (t2 == 60) t2 = 0;
        h += (s + m * 60) / 3600;
        m += (s) / 60;
        if (h >= 60) h -= 60;
        double a[3]; a[0] = h, a[1] = m, a[2] = s;
        if (check(a)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

