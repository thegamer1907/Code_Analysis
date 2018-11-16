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

int n = 0;
vector <vector <int>> data;

int DFS (int v)
{
    int result = 0;
    for (int u : data[v])
        result = max (result, DFS (u));
    return result + 1;
}

inline void Solve ()
{
    cin >> n;
    data.resize (n);
    vector <int> roots;
    for (int i = 0; i < n; i++)
    {
        int p = 0;
        cin >> p;
        if (p == -1)
            roots.push_back (i);
        else
        {
            p--;
            data[p].push_back (i);
        }
    }
    int result = 0;
    for (auto it : roots)
        result = max (result, DFS (it));
    cout << result;
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
