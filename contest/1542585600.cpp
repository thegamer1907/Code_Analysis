#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>
#include <assert.h>

#define fr first
#define sc second
#define mk make_pair
#define pb push_back
#define pf push_front
#define pii pair <int ,int>
#define all(s) s.begin (), s.end ()

using namespace std;

const int N = 1e5 + 2, M = 12 * 3600;

int mp[15][15], tt;

main()
{
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;

    if (m == 0 && s == 0)
    {
        mp[h][h % 12 + 1] = mp[h % 12 + 1][h] = 1;

        if (h == 1)
            mp[h][12] = mp[12][h] = 1;
        else
            mp[h][h - 1] = mp[h - 1][h] = 1;
    }
    else
        mp[h][h % 12 + 1] = mp[h % 12 + 1][h] = 1;

    if (m % 5 == 0 && s == 0)
    {
        m /= 5;
        if (m == 0) m = 12;

        mp[m][m % 12 + 1] = mp[m % 12 + 1][m] = 1;

        if (m == 1)
            mp[m][12] = mp[12][m] = 1;
        else
            mp[m][m - 1] = mp[m - 1][m] = 1;
    }
    else
    {
        m /= 5;

        if (m == 0) m = 12;

        mp[ m ][ m % 12 + 1 ] = mp[m % 12 + 1][m] = 1;
    }
    if (s % 5 == 0)
    {
        s /= 5;

        if (s == 0) s = 12;

        mp[s][s % 12 + 1] = mp[s % 12 + 1][s] = 1;

        if (s == 1)
            mp[s][12] = mp[12][s] = 1;
        else
            mp[s][s - 1] = mp[s - 1][s] = 1;
    }
    else
    {
        s /= 5;

        if (s == 0) s = 12;

        mp[ s ][ s % 12 + 1 ] = mp[s % 12 + 1][s] = 1;
    }


    tt = t1;

    while (1)
    {
        if (mp[t1][t1 % 12 + 1])
            break;

        t1 = t1 % 12 + 1;

        if (t1 == t2)
        {
            puts("YES");
            return 0;
        }
    }
    t1 = tt;

    while (1)
    {
        if (t1 == 1)
        {
            if (mp[t1][12])
                break;
            t1 = 12;
        }
        else
        {
            if (mp[t1][t1 - 1])
                break;
            t1--;
        }

        if (t1 == t2)
        {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
}
