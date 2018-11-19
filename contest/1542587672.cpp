#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 110;

bool u[1001000];
int h, m, s, t1, t2;

int main()
{
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    h %= 12; t1 %= 12; t2 %= 12;
    h *= 3600; h += m * 60; h += s;
    m *= 720; m += s;
    s *= 720;
    t1 *= 3600; t2 *= 3600;
    u[h] = u[m] = u[s] = true;
    if (t1 > t2) swap(t1, t2);
    bool f = true;
    for (int i = t1; i <= t2; ++i)
        f &= !u[i];
    if (!f)
    {
        f = true;
        for (int i = t2; i <= t1 + 43200; ++i)
            f &= !u[i % 43200];
    }
    puts(f ? "YES" : "NO");

    return 0;
}
