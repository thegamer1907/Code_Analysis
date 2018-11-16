#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1010;
int cnt[MAXN];
int main () {
    int n, m, a1, a2;
    cin >> n >> m;
    while(m--) {
        cin >> a1 >> a2;
        ++cnt[a1];
        ++cnt[a2];
    }
    int t = 1;
    while(cnt[t])
        ++t;
    cout << n - 1 << '\n';
    for (int i = 1; i <= n; ++i)
        if (i != t)
            cout << t << " " << i << '\n';
    return 0;
}