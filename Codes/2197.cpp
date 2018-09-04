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
    lli n = 0;
    cin >> n;
    vector <lli> data (n);
    for (auto &it : data)
        cin >> it;
    vector <lli> suffix (n);
    suffix[n - 1] = data[n - 1];
    for (lli i = n - 2; i >= 0; i--)
        suffix[i] = suffix[i + 1] + data[i];
    map <lli, lli> check;
    check[0] = 1;
    for (lli i = 0; i < n; i++)
        check[suffix[i]]++;
    lli result = 0;
    lli sum = 0;
    for (lli i = 0; i < n; i++)
    {
        sum += data[i];
        check[suffix[i]]--;
        if (check[sum] > 0)
            result = max (result, sum);
    }
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
