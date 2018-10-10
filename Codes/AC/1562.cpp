/* GCC */
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
//#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#include <sstream>

#define X first
#define Y second
#define mp(a, b) make_pair((a), (b))

using namespace std;

long long l, tl, r, k, i, a[100010], b[100010], n, s, t;

int main()
{
    //freopen("input.in", "r", stdin);
    //freopen("output.out", "w", stdout);

    scanf("%I64d %I64d", &n, &s);
    for(i = 0; i < n; i++)
        scanf("%I64d", &a[i]);

    tl = 0;
    l = 0;
    r = n + 1;
    while(r - l > 1)
    {
        k = (l + r) / 2;

        for(i = 0; i < n; i++)
            b[i] = a[i] + k * (i + 1);

        sort(b, b + n);

        t = 0;
        for(i = 0; i < k; i++)
        {
            t += b[i];
            if(t > s)
                break;
        }

        if(t > s)
            r = k;
        else
        {
            l = k;
            tl = t;
        }
    }

    printf("%I64d %I64d\n", l, tl);

    return 0;
}














