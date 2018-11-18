#include <bits/stdc++.h>
using namespace std;

typedef long long i64;

int v[100010];
int frc[100010];
i64 sumact;
void add(int x)
{
    sumact += frc[x]++;
}
void rem(int x)
{
    sumact -= --frc[x];
}
i64 lastdp[100010];
i64 newdp[100010];
int l0 = 1, r0;

void divide(int st, int dr, int l, int r)
{
    if (st > dr)
        return;
    int n = (st + dr) / 2;
    int locbest(-1), start = min(r, n - 1);

    while (r0 < n)
        add(v[++r0]);
    while (r0 > n)
        rem(v[r0--]);
    while (l0 <= start)
        rem(v[l0++]);

    for (int i(start); i >= l; i--) {
        while (l0 > i + 1)
            add(v[--l0]);
        if (newdp[n] > lastdp[i] + sumact)
            newdp[n] = lastdp[i] + sumact, locbest = i;
    }
    assert(locbest != -1);
    divide(st, n - 1, l, locbest);
    divide(n + 1, dr, locbest, r);
}

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;

    for (int i(1); i <= n; i++) {
        cin >> v[i];
        newdp[i] = (1ll << 60);
    }

    while (k--) {
        for (int i(1); i <= n; i++)
            lastdp[i] = newdp[i], newdp[i] = (1ll << 60);
        divide(1, n, 0, n);
    }

    cout << newdp[n] << '\n';
    return 0;
}
