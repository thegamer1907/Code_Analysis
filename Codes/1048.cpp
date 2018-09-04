#include <bits/stdc++.h>
#pragma optimize("O3");
#define int long long
#define double long double
using namespace std;


const int MAXN = 1e5 + 10;
const int INF = 1e18;

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; ++i) {
        int q, e;
        cin >> q >> e;
        a.push_back({q, e});
    }

    sort(a.begin(), a.end());
    int best = 0, l = 0, cur = 0;
    for (int r = 0; r < n; ++r) {
        while (a[r].first - a[l].first >= d)
            cur -= a[l++].second;

        cur += a[r].second;
        best = max(best, cur);
    }

    cout << max(best, cur);


    return 0;
}