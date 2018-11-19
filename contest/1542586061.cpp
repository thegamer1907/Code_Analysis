#include <bits/stdc++.h>
using namespace std;
int h, m, s, t1, t2, t[4];
int conv(int h, int m, int s)
{
    return 3600 * h + 60 * m + s;
}

int belong(int l, int r, int x)
{
    if (x < l)
        x += 43200;
    return l <= x && x <= r;
}

int ok()
{
    puts("YES");
    exit(0);
}

int main()
{
    cin >> h >> m >> s >> t1 >> t2;
    t1 = conv(t1, 0, 0);
    t2 = conv(t2, 0, 0);
    t[0] = conv(h, m, s);
    t[1] = 720 * m + 12 * s;
    t[2] = 720 * s;
    sort(t, t + 3);
    t[3] = t[0] + 43200;
    for (int i = 0; i <= 2; i++)
        if (belong(t[i], t[i + 1], t1) && belong(t[i], t[i + 1], t2))
            ok();
    puts("NO");
    return 0;
}