#include <bits/stdc++.h>

using namespace std;

int const N = 500;

double a[N];

bool check(double l, double r, double pos) {
    if (l <= pos && pos <= r)   return true;
    if (l <= pos + 12 && pos + 12 <= r) return true;
    return false;
}

int main()
{
  //  freopen("inp.txt", "r", stdin);
    double h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h = h + m / 60 + s / 3600;
    if (h >= 12)
        h -= 12;
    m += s / 60;
    m /= 5;
    s /= 5;
    a[1] = h;
    a[2] = m;
    a[3] = s;
    sort(a + 1, a + 4);
    for (int i = 4; i <= 6; i++)
        a[i] = a[i-3] + 12;
    if (t1 >= 12)
        t1 -= 12;
    if (t2 >= 12)
        t2 -= 12;

    for (int i = 1; i < 6; i++) {
        if (check(a[i], a[i+1], t1) && check(a[i], a[i+1], t2)) {
            puts("YES");
            return 0;
        }
    }

    puts("NO");

}
