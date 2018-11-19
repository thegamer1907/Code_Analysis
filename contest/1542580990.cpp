#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

#ifdef CONTEST_DEBUG
    #define DASSERT(x)      assert(x)
    #define DPRINTF(...)    printf(__VA_ARGS__)
#else
    #define DASSERT(x)      (void)0
    #define DPRINTF(...)    (void)0
#endif

using namespace std;


int main()
{
    int h = 0;
    int m = 0;
    int s = 0;
    int t1 = 0;
    int t2 = 0;

    cin >> h >> m >> s >> t1 >> t2;

    long double as = s / 60.0l;
    long double am = (m + as) / 60.0l;
    long double ah = ((h%12) + am) / 12.0l;

    long double at1 = (t1 % 12) / 12.0l;
    long double at2 = (t2 % 12) / 12.0l;

    DPRINTF("ah = %0.15Lf\nam = %0.15Lf\nas = %0.15Lf\n", ah, am, as);
    DPRINTF("at1 = %0.15Lf\nat2 = %0.15Lf\n", at1, at2);

    if (at2 < at1)
    {
        swap(at1, at2);
    }

    DPRINTF("at1 = %0.15Lf\nat2 = %0.15Lf\n", at1, at2);

    vector<long double> axis = {ah, am, as};
    sort(axis.begin(), axis.end());
    DPRINTF("axis = {%0.15Lf, %.015Lf, %0.15Lf}\n", axis[0], axis[1], axis[2]);

    if (at1 < axis[0])
    {
        if (at2 < axis[0] || at2 > axis[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (at1 < axis[1])
    {
        if (at2 < axis[1] && at2 > axis[0])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (at1 < axis[2])
    {
        if (at2 < axis[2] && at2 > axis[1])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        if (at2 > axis[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }


    return 0;
}

// EOF

