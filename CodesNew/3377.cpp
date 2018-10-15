#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, s, mx, x;
    cin >> n >> m;
    mx = -1;
    s = 0;
    for(int i = 0; i < n; ++i){
        cin >> x;
        s = s + x;
        mx = max(mx, x);
    }
    int ans1, ans2;
    ans1 = max((s + m - 1) / n + 1, mx);
    ans2 = mx + m;
    cout << ans1 << ' ' << ans2;
}
