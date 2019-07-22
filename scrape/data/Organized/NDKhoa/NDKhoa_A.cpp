#include <bits/stdc++.h>

using namespace std;

long long n, m, k, i, j, pos, res, p[100005];

int main() {
#ifndef ONLINE_JUDGE
    freopen("CODEFORCES.INP", "r", stdin);
    freopen("CODEFORCES.OUT", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++) cin >> p[i];

    i = 1; j = 0; pos = k + 1;
    while (i <= m)
        if (p[i] < pos) j++, i++;
        else {
            if (j > 0) pos += j, res++; else pos += k;
            if (pos <= p[i]) pos += ((p[i] - pos) / k + 1) * k;
            j = 0;
        }
    res += int(j > 0);

    cout << res;
}