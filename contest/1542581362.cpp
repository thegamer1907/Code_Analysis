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

const int N = 1e5 + 2;

int n, k, ar[5][N], mp[5][5][5][5], a, b, c, d;

main()
{
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        a = b = c = d = -1;

        for (int j = 1; j <= k; j++)
        {
            scanf("%d", &ar[j][i]);
            if (a == -1)
                a = ar[j][i];
            else if (b == -1)
                b = ar[j][i];
            else if (c == -1)
                c = ar[j][i];
            else
                d = ar[j][i];
        }
        if (k == 1)
            mp[a][0][0][0] = 1;
        if (k == 2)
            mp[a][b][0][0] = 1;
        if (k == 3)
            mp[a][b][c][0] = 1;
        if (k == 4)
            mp[a][b][c][d] = 1;
    }
    if (mp[0][0][0][0])
    {
        puts("YES");
        return 0;
    }
    if (k == 1)
        puts("NO");

    else if (k == 2)
    {
        if (mp[0][1][0][0] && mp[1][0][0][0])
            puts("YES");
        else
            puts("NO");
    }
    else if (k == 3)
    {
        if (mp[1][0][0][0] && (mp[0][1][1][0] || mp[0][1][0][0] || mp[0][0][1][0]) )
            puts("YES");
        else if (mp[0][1][0][0] && (mp[1][0][0][0] || mp[0][0][1][0] || mp[1][0][1][0]) )
            puts("YES");
        else if (mp[0][0][1][0] && (mp[0][1][0][0] || mp[1][0][0][0] || mp[1][1][0][0]) )
            puts("YES");
        else
            puts("NO");
    }
    else
    {
        if (mp[1][0][0][0] && (mp[0][1][0][0] || mp[0][0][1][0] || mp[0][0][0][1] || mp[0][1][1][0] || mp[0][1][0][1]|| mp[0][0][1][1]
                               || mp[0][1][1][1] ) )
            puts("YES");

        else if (mp[0][1][0][0] && (mp[1][0][0][0] || mp[0][0][1][0] || mp[0][0][0][1] || mp[1][0][1][0] || mp[1][0][0][1]|| mp[0][0][1][1]
                               || mp[1][0][1][1] ) )
            puts("YES");
        else if (mp[0][0][1][0] && (mp[1][0][0][0] || mp[0][1][0][0] || mp[0][0][0][1] || mp[1][1][0][0] || mp[1][0][0][1]|| mp[0][1][0][1]
                               || mp[1][1][0][1] ) )
            puts("YES");
        else if (mp[0][0][0][1] && (mp[1][0][0][0] || mp[0][1][0][0] || mp[0][0][1][0] || mp[1][1][0][0] || mp[1][0][1][0]|| mp[0][1][1][0]
                               || mp[1][1][1][0] ) )
            puts("YES");
        else if (mp[1][1][0][0] && (mp[0][0][1][0] || mp[0][0][0][1] || mp[0][0][1][1] ))
            puts("YES");
        else if (mp[1][0][1][0] && (mp[0][1][0][0] || mp[0][0][0][1] || mp[0][1][0][1] ))
            puts("YES");
        else if (mp[1][0][0][1] && (mp[0][1][0][0] || mp[0][0][1][0] || mp[0][1][1][0] ))
            puts("YES");
        else if (mp[0][1][1][0] && (mp[1][0][0][0] || mp[0][0][0][1] || mp[1][0][0][1] ))
            puts("YES");
        else if (mp[0][1][0][1] && (mp[1][0][0][0] || mp[0][0][1][0] || mp[1][0][1][0] ))
            puts("YES");
        else if (mp[0][0][1][1] && (mp[1][0][0][0] || mp[0][1][0][0] || mp[1][1][0][0] ))
            puts("YES");
        else
            puts("NO");
    }
}

