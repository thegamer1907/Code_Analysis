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
    int a, b, c, ans = 0;
    cin >> a >> b >> c;
    ans = max(ans, a+b+c);
    ans = max(ans, a*b*c);
    ans = max(ans, a+b*c);
    ans = max(ans, (a+b)*c);
    ans = max(ans, a*b+c);
    ans = max(ans, a*(b+c));
    cout << ans << '\n';
    return 0;
}
