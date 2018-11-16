#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
    #define dbg(...) fprintf(stderr, __VA_ARGS__)
#else
    #define dbg(...)
#endif

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, a, b, now = 0, ans = 0;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        now -= a;
        ans = max(ans, now);
        now += b;
        ans = max(ans, now);
    }
    cout << ans << '\n';

    return 0;
}
