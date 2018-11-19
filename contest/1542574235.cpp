#include <bits/stdc++.h>
using namespace std;

int h, m, s, t11, t22;
double t1, t2, a[5];

int main() {
    cin >> h >> m >> s >> t11 >> t22;
    a[0] = (h * 30) % 360 * 1.0 + 0.5 * m + s / 120.0; a[1] = m * 6.0 + s * 0.1; a[2] = s * 6.0;
    sort(a, a + 3);
    //for (int i = 0; i < 3; i++) printf("%lf\n", a[i]);
    t1 = t11 * 30 % 360 + 0.0; t2 = t22 * 30 % 360 + 0.0;
    if (t1 > t2) swap(t1, t2);
    //printf("%lf %lf\n", t1, t2);
    bool flag = 0;
    if (t1 < a[0] && t2 > a[2]) flag = 1;
    if (t1 > a[0] && t2 < a[1]) flag = 1;
    if (t1 > a[1] && t2 < a[2]) flag = 1;
    if (t1 > a[2] || t2 < a[0]) flag = 1;
    printf("%s", flag ? "YES" : "NO");
    return 0;
}
