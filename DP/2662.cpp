#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    char a[16], b[16];
    int n, p = 0, cnt = 0, ans = 0;

    cin >> a >> b;
    n = strlen(a);
    for (int i = 0; i < n; ++i) {
        if (a[i] == '+') ++p;
        else --p;
    }
    for (int i = 0; i < n; ++i) {
        if (b[i] == '+') --p;
        else if (b[i] == '-') ++p;
        else ++cnt;
    }
    cerr << "p = " << p << " cnt = " << cnt << '\n';
    for (int i = 0; i < (1 << cnt); ++i) {
        if (2*__builtin_popcount(i)-cnt == p) ++ans;
    }
    cout << setprecision(9) << ans/double(1 << cnt);

    return 0;
}
