#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
const int INF = (0x7fffffff/*ffffffff*/ - 10);

inline void dbg(const string &s, const vector<int> &v)
{
    #ifdef LOCAL_HUGO
    int i = 0; for (const char &c : s) { if (c == '$') cout << v[i++]; else cout << c; } cout << '\n';
    #endif
}

bool solve();
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << (solve() ? "Yes\n" : "No\n");
    return 0;
}

bool solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    vector<int> b(k);
    for(int i = 0; i < k; ++i)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    int o = k;
    for(int i = 0; i < n; ++i)
    {
        if (a[i] == 0) a[i] = b[--o];
    }

    for(int i = 0; i < (n-1); ++i)
    {
        if (a[i] > a[i+1]) return true;
    }
    return false;
}