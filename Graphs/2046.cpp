//{

#include <bits/stdc++.h>

#define all(x) x.begin (), x.end ()
#define rall(x) x.rbegin (), x.rend ()

#define LOCAL

using namespace std;

using lli = long long;
using ld = long double;

mt19937 rnd (time (nullptr));

//}

int n = 0, m = 0;
vector <vector <int>> data;
vector <int> values;

int DFS (int v, int p, int cnt)
{
    if ((data[v].size () == 1) && (p != -1))
        return 1;
    int result = 0;
    for (int u : data[v])
    {
        if (u != p)
        {
            if (values[u] == 1)
            {
                if (cnt + 1 > m)
                    continue;
                result += DFS (u, v, cnt + 1);
            }
            else
                result += DFS (u, v, 0);
        }
    }
    return result;
}

inline void Solve ()
{
    cin >> n >> m;
    data.resize (n);
    values.resize (n);
    for (auto &it : values)
        cin >> it;
    for (int i = 0; i < n - 1; i++)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        x--, y--;
        data[x].push_back (y);
        data[y].push_back (x);
    }
    cout << DFS (0, -1, values[0]);
}

signed main ()
{
#ifndef LOCAL
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
#endif
    cout << fixed << setprecision (20);
    Solve ();
    return 0;
}
