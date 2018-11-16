#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 123;
int n, m, a[MAX], ans[MAX];
set<int> s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = n; i > 0; --i) {
        s.insert(a[i]);
        ans[i] = s.size();
    }
    while (m--) {
        int x;
        cin >> x;
        cout << ans[x] << '\n';
    }

    return 0;
}
