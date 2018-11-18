#include <bits/stdc++.h>
using namespace std;
#define N 100100
#define inf 1000000000
#define eps 1e-7
#define pi acos(-1)
#define gc getchar
#define pc putchar
#define pb push_back

typedef pair<int, int> pii;
typedef long long ll;

template <class T>
inline void chkmax(T &x, T y) {if (x < y) x = y;}

template <class T>
inline void chkmin(T &x, T y) {if (x > y) x = y;}

int h, m, s, a, b;
double t[4];
bool fl;

bool same(double x, double y) {
    return fabs(x - y) < eps;
}

int main() {
    //freopen("1.in", "r", stdin);
    //freopen("11.out", "w", stdout);
    scanf("%d %d %d %d %d", &h, &m, &s, &a, &b);
    t[2] = 0.2 * s, t[1] = 0.2 * (m + t[2] / 12), t[0] = h + t[1] / 12;
    if (t[0] == 12) t[0] = 0;
    sort(t, t + 3);
    double f = a - t[0], g = b - t[0];
    if (f < 0) f += 12;
    if (f == 12) f = 0;
    if (g < 0) g += 12;
    if (g == 12) g = 0;
    t[1] -= t[0], t[2] -= t[0], t[0] = 0;
    for (int i = 0; i < 3; i ++)
        if (same(g, t[i])) swap(f, g);
    if (same(f, t[0])) {
        if (g > t[1] && g < t[2]) fl = 0;
        else fl = 1;
    }
    else if (same(f, t[1])) {
        if (g > t[2] && g < 12) fl = 0;
        else fl = 1;
    }
    else if (same(f, t[2])) {
        if (g > 0 && g < t[1]) fl = 0;
        else fl = 1;
    }
    else {
        if (f > g) swap(f, g);
        if (f < t[1]) {
            if (g < t[1]) fl = 1;
            else fl = 0;
        }
        else if (f < t[2]) {
            if (g < t[2]) fl = 1;
            else fl = 0;
        }
        else fl = 1;
    }

    if (fl) puts("YES");
    else puts("NO");

    return 0;
}
