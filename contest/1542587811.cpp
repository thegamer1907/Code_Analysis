#include <bits/stdc++.h>

#define x first
#define y second

using namespace std;

typedef long long ll;
typedef long double ld;

const int N = 2e5 + 5;
const int nmax = 1e6 + 5;
const ll inf = 1e9;
const int mod = 1e9 + 7;

double H = 3600 * 12;
double M = 3600;
double S = 60;

int ok(double h, double m, double s, double t, double tt)
{
    double a[3] = {h, m, s};
    sort(a, a + 3);
    if ((t < a[0] || t > a[2]) && (tt > a[2] || tt < a[0]))
        return 1;
    if (t > a[0] && t < a[1] && tt > a[0] && tt < a[1])
        return 1;
    if (t > a[1] && t < a[2] && tt > a[1] && tt < a[2])
        return 1;
    return 0;
}

int main()
{
    double h, m, s, t, tt;
    cin >> h >> m >> s >> t >> tt;
    if (h == 12)
        h = 0;
    h = h * 3600.0  + 60.0 * m + s;
    m = m * 60.0 + s;
    if (t == 12)
        t = 0;
    if (tt == 12)
        tt = 0;
    t *= 3600.0;
    tt *= 3600.0;
    h = 360.0 * h / H;
    m = 360.0 * m / M;
    s = 360.0 * s / S;
    t = 360.0 * t / H;
    tt = 360.0 * tt / H;
    //cout << h << ' ' << m << ' ' << s << ' ' << t << ' ' << tt << endl;
    cout << (ok(h, m, s, t, tt)? "YES\n": "NO\n");
    return 0;
}
