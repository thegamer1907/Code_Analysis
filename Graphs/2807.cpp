#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

const int MAXN = 1e5 + 5;

int c[MAXN];
set<int> S[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int res = 1000000;
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
        res = min(res, c[i]);
    }

    int maks = 0;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        if (c[a] == c[b]) continue;
        S[c[a]].insert(c[b]);
        S[c[b]].insert(c[a]);
        maks = max({maks, (int)S[c[a]].size(), (int)S[c[b]].size()});
    }

    if (maks)
    {
        for (int i = 1; i < MAXN; i++)
        {
            if (S[i].size() == maks)
            {
                cout << i << "\n";
                return 0;
            }
        }
    }
    cout << res << "\n";
}
