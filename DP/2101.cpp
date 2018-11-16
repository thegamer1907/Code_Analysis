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

inline void Solve ()
{
    int n = 0, m = 0;
    cin >> n >> m;
    vector <int> data (n);
    for (auto &it : data)
        cin >> it;
    map <int, int> buffer;
    for (auto it : data)
        buffer[it]++;
    vector <int> result (n);
    for (int i = 0; i < n; i++)
    {
        result[i] = buffer.size ();
        buffer[data[i]]--;
        if (buffer[data[i]] == 0)
            buffer.erase (data[i]);
    }
    for (int i = 0; i < m; i++)
    {
        int l = 0;
        cin >> l;
        l--;
        cout << result[l] << '\n';
    }
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
