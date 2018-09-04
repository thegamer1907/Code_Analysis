#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstring>
#include <string>

using namespace std;

#define MAXN 100010

struct fr
{
       long long m, s;
};

fr a[MAXN];
int n;
long long d;
long long res;
long long cnt[MAXN];

bool cmp(fr fr1, fr fr2)
{
     return fr1.m < fr2.m;
}

int main()
{
    cin >> n >> d;
    for (int i = 1; i <= n; i++) cin >> a[i].m >> a[i].s;
    sort(a + 1, a + n + 1, cmp);
    cnt[0] = 0;
    for (int i = 1; i <= n; i++)
        cnt[i] = cnt[i - 1] + a[i].s;
    int j = 1;
    for (int i = 1; i <= n; i++) 
    {
        while (a[i].m - a[j].m >= d) j++;
        if (cnt[i] - cnt[j - 1] > res) res = cnt[i] - cnt[j - 1];
    }
    cout << res;
    return 0;
}
