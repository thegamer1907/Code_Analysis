#include <cstdio>

const int round = 43200;
int hh, mm, ss, tt1, tt2;
int h, m, s, t1, t2;

int main() {
    scanf("%d%d%d%d%d", &hh, &mm, &ss, &tt1, &tt2);
    hh %= 12;
    tt1 %= 12;
    tt2 %= 12;
    h = hh * 3600 + mm * 60 + ss;
    m = (mm * 60 + ss) * 12;
    s = ss * 720;
    t1 = tt1 * 3600;
    t2 = tt2 * 3600;
    if (h < t1)
        h += round;
    if (m < t1)
        m += round;
    if (s < t1)
        s += round;
    if (t2 < t1)
        t2 += round;
    if ((t2 < h && t2 < m && t2 < s) || (t2 > h && t2 > m && t2 > s))
        puts("YES");
    else
        puts("NO");
    return 0;
}

