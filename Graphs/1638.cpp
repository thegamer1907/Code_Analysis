#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>
#include <bitset>
#include <map>
#include <set>
#include <tuple>
#include <string.h>
#include <math.h>
#include <random>
#include <functional>
#include <assert.h>
#include <math.h>

using namespace std;

using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);

    vector<int> a(n + 1);

    for (int i = 1; i < n; i++)
        scanf("%d", &a[i]);

    a[n] = 1;
    
    int now = 1;

    while (now <= n)
    {
        if (now == t)
        {
            printf("YES\n");
            return 0;
        }

        now = now + a[now];
    }

    printf("NO\n");

    return 0;
}