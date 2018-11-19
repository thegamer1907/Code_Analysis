#include <bits/stdc++.h>
using namespace std;

inline int f(int v, int ch)
{
    if (v == 60 && ch == 1) return 60;
    if (v == 0 && ch == -1) return 0;
    return (v + 60) % 60;
}

double h, m, s, t1, t2;
bool solve(int ch)
{
    for (int i = f(t1 + ch, ch); f(i - ch, ch) != t2; i = f(i + ch, ch))
    {
        int pred = f(i - ch, -ch);
        if ((pred <= h && h <= i) || (pred <= m && m <= i) || (pred <= s && s <= i) && ch == 1) return false;
        if ((i <= h && h <= pred) || (i <= m && m <= pred) || (i <= s && s <= pred) && ch == -1) return false;
    }
    return true;
}

int main()
{
    cin >> h >> m >> s >> t1 >> t2;

    s = f(s, 0);
    t1 = f(t1 * 5, 0);
    t2 = f(t2 * 5, 0);
    m = f(m, 0) + s / 60.0;
    h = f(h * 5, 0) + m / 60.0;

    cout << (solve(1) || solve(-1) ? "YES" : "NO");
    return 0;
}
