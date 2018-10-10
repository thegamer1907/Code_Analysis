//{

#include <bits/stdc++.h>

#define forn(i, a, b) for (auto i = a; i <= b; i++)
#define all(x) x.begin (), x.end ()
#define rall(x) x.rbegin (), x.rend ()
#define mp make_pair
#define pii pair <lli, lli>
#define pb push_back

#define LOCAL

using namespace std;

using lli = long long;
using ld = long double;

mt19937 rnd (time (nullptr));

//}

const lli inf = 1e18;

inline void Solve ()
{
    lli n = 0, m = 0, k = 0;
    cin >> n >> m >> k;
    lli x = 0, s = 0;
    cin >> x >> s;
    vector <pair <lli, lli>> from (m);
    for (auto &it : from)
        cin >> it.second;
    for (auto &it : from)
        cin >> it.first;
    from.push_back ({ 0, x });
    sort (all (from));
    vector <pair <lli, lli>> to (k);
    for (auto &it : to)
        cin >> it.second;
    for (auto &it : to)
        cin >> it.first;
    to.push_back ({ 0, 0 });
    sort (all (to));
    vector <lli> prefix (to.size ());
    prefix[0] = to[0].second;
    for (lli i = 1; i < to.size (); i++)
        prefix[i] = max (prefix[i - 1], to[i].second);
    lli min_value = -1;
    for (lli i = 0, j = to.size () - 1; i < from.size (); i++)
    {
        while ((from[i].first + to[j].first > s) && (j - 1 >= 0))
            j--;
        if (from[i].first + to[j].first <= s)
        {
            lli current = (n - prefix[j]) * from[i].second;
            if ((min_value == -1) || (min_value > current))
                min_value = current;
        }
    }
    cout << min_value;
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
