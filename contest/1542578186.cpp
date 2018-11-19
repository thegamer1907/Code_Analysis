#pragma comment(linker, "/STACK:256000000")
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <memory.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include <functional>
#include <random>
#include <bitset>

using namespace std;
typedef long long int64;
typedef unsigned long long uint64;
typedef pair<int, int> pii;
typedef pair<int64, int64> pll;
const int INF = (int)(1e9 + 1e6);
const int64 LINF = (int64)(4e18);
const double EPS = 1e-9;
mt19937 ggen;

const int MOD = 1000000007;

int add(int a, int b, int m = MOD)
{
    int res = a + b;
    if (res >= m)
        res -= m;
    return res;
}

int sub(int a, int b, int m = MOD)
{
    int res = a - b;
    if (res < 0)
        res += m;
    return res;
}

int mul(int a, int b, int m = MOD)
{
    return (int64)a * b % m;
}

const int MAXN = 100005;
const int MAXK = 22;
const int LOG = 20;

struct check
{
    int l, r, pl, pr;

    check(int l, int r, int pl, int pr) : l(l), r(r), pl(pl), pr(pr)
    {
    }
};

int k, n;
int a[MAXN];
int64 dp[MAXK][MAXN];
int p[MAXK][MAXN];
int cnt[MAXN], t[MAXN], timer;
int curr, curl;
int64 cost;
vector <check> v;

void init()
{
    scanf ("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf ("%d", &a[i]);
    }
}

inline void inc()
{
    int val = a[--curl];
    if (t[val] != timer)
    {
        t[val] = timer;
        cnt[val] = 0;
    }
    cost += cnt[val];
    ++cnt[val];
}

inline void del()
{
    int val = a[curr--];
    --cnt[val];
    cost -= cnt[val];
}

inline void update()
{
    cost = 0LL;
    ++timer;
    curr = n;
    curl = n + 1;
}

void go(int lev, int l, int r, int pl, int pr)
{
    if (l > r)
    {
        return;
    }
    int m = (l + r) >> 1;
    dp[lev][m] = LINF;
    while (curl > min(pr, m - 1) + 1)
    {
        inc();
    }
    while (curr > m)
    {
        del();
    }
    //printf("%d\n", m);
    for (int i = min(pr, m - 1); i >= pl; --i)
    {
//        printf("p %d %d-%d\n", i, curl, curr);
        int64 cur = dp[lev - 1][i] + cost;
        if (cur < dp[lev][m])
        {
            dp[lev][m] = cur;
            p[lev][m] = i;
        }
        if (i > pl)
        {
            inc();
        }
    }
    v.push_back(check(m + 1, r, p[lev][m], pr));
    v.push_back(check(l, m - 1, pl, p[lev][m]));
}

void solve()
{
    init();
    ++timer;
    for (int i = 1; i <= n; ++i)
    {
        cost += cnt[a[i]];
        cnt[a[i]]++;
        dp[1][i] = cost;
        p[1][i] = 0;
    }
    for (int j = 2; j <= k; ++j)
    {
        for (int i = 1; i < j; ++i)
        {
            p[j][i] = i;
        }
        v.clear();
        v.push_back(check(j, n, j - 1, n - 1));
        int st = 0;
        while (st < (int)v.size())
        {
            update();
            int en = (int)v.size() - 1;
            for (int i = st; i <= en; ++i)
            {
//                printf("lev %d %d-%d %d-%d\n", j, v[i].l, v[i].r, v[i].pl, v[i].pr);
                go(j, v[i].l, v[i].r, v[i].pl, v[i].pr);
            }
//            printf("\n");
            st = en + 1;
        }
    }
//    for (int j = 1; j <= k; ++j)
//    {
//        printf("\n");
//        for (int i = 1; i <= n; ++i)
//        {
//            printf("level %d pos %d dp %I64d p %d\n", j, i, dp[j][i], p[j][i]);
//        }
//    }
    cout << dp[k][n] << endl;
}

void generate(int n, int k, int diff)
{
    freopen("input.txt", "wt", stdout);
    printf("%d %d\n", n, k);
    for (int i = 1; i <= n; ++i)
    {
        printf("%d ", rand() % diff + 1);
    }
    fclose(stdout);
}

int main()
{
    iostream::sync_with_stdio(false); cin.tie(0);
    //generate(100000, 20, 3);
#ifdef _MY_DEBUG
    freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout);
#endif
    ggen = mt19937(1337);

    double st = clock();
    solve();
    cerr << (clock() - st) / CLOCKS_PER_SEC;

    return 0;
}

