//{

#include <bits/stdc++.h>

using namespace std;

#define forn(i, a, b) for (auto i = a; i <= b; i++)
#define pb push_back
#define mp make_pair
#define all(x) x.begin (), x.end ()
#define rall(x) x.rbegin (), x.rend ()
#define pii pair <lli, lli>

typedef long long lli;
typedef long double ld;

//}

void Solve ()
{
    lli n = 0, a = 0, b = 0;
    cin >> n >> a >> b;
    if (a > b)
        swap (a, b);
    vector <lli> data (n);
    for (lli i = 0; i < n; i++)
        data[i] = i + 1;
    for (lli round = 1; data.size () > 2; round++)
    {
        vector <lli> next;
        for (lli i = 0; i < data.size () - 1; i += 2)
        {
            if ((data[i] == a) && (data[i + 1] == b))
            {
                cout << round;
                return;
            }
            if (data[i] == a)
                next.push_back (data[i]);
            else if (data[i] == b)
                next.push_back (data[i]);
            else if (data[i + 1] == a)
                next.push_back (data[i + 1]);
            else if (data[i + 1] == b)
                next.push_back (data[i + 1]);
            else
                next.push_back (data[i]);
        }
        data = next;
    }
    cout << "Final!";
}

signed main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    cout << fixed << setprecision (20);
    Solve ();
    return 0;
}
