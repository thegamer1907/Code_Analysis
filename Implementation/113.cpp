#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <iterator>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define PI acos(-1)

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

using namespace std;

int n, x, y, t, kol;
vector < int > a, c;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);

    cin >> n >> x >> y;
    for (int i = 0; i < n; i++)
        a.pb(i + 1);
    t = max(x, y);
    x = min(x, y);
    y = t;

    kol = 0;
    while (a.size() > 2)
    {
        kol++;
        c.clear();
        for (int i = 0; i < a.size(); i += 2)
        {
            if (a[i] == x && a[i + 1] == y)
            {
                cout << kol;
                return 0;
            }
            else if (a[i] == x)
                c.pb(a[i]);
            else if (a[i] == y)
                c.pb(a[i]);
            else if (a[i + 1] == x)
                c.pb(a[i + 1]);
            else if (a[i + 1] == y)
                c.pb(a[i + 1]);
            else
                c.pb(a[i]);
        }
        a = c;
    }

    if (a[0] == x && a[1] == y)
        cout << "Final!";

    return 0;
}
