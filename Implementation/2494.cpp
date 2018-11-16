#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
    #define dbg(...) fprintf(stderr, __VA_ARGS__)
#else
    #define dbg(...)
#endif

int n, m, s = 1;
long long ans;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int x, v;
        cin >> x;
        v = x - s;
        if (v < 0)
            v += n;
        ans += v;
        s = x;
    }
    cout << ans << '\n';

    return 0;
}
