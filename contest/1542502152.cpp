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

lli Bit (lli mask, lli i)
{
    if ((mask & (1LL << i)) == 0)
        return 0;
    return 1;
}

inline void Solve ()
{
    lli n = 0, k = 0;
    cin >> n >> k;
    vector <lli> counter ((1LL << k));
    for (lli i = 0; i < n; i++)
    {
        lli value = 0;
        for (lli j = k - 1; j >= 0; j--)
        {
            lli bit = 0;
            cin >> bit;
            value += bit * (1LL << j);
        }
        counter[value]++;
    }
    vector <lli> buffer;
    for (lli mask = 0; mask < (1LL << k); mask++)
        buffer.push_back (mask);
    for (lli mask = 1; mask < (1LL << (1LL << k)); mask++)
    {
        vector <pair <lli, lli>> check (k);
        for (lli i = 0; i < (1LL << k); i++)
        {
            if ((Bit (mask, i) == 1) && (counter[buffer[i]] > 0))
            {
                for (lli j = 0; j < k; j++)
                {
                    if (Bit (buffer[i], j) == 1)
                        check[j].first++;
                    else
                        check[j].second++;
                }
            }
        }
        bool flag = true;
        for (auto it : check)
            if (it.second < it.first)
                flag = false;
        if (count (all (check), make_pair (0LL, 0LL)) == k)
            flag = false;
        if (flag)
        {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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
