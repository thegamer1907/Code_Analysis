#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <cstring>
#include <set>
#include <ctime>
#include <queue>
#include <iomanip>
#include <cassert>

using namespace std;

#define INF 1000000001
#define sqr(x) (x) * (x)
#define maxn 12000001
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define all(a) a.begin(),a.end()
#define len(a) (int)(a.length())
#define F first
#define S second
#define pii pair<int,int>
#define LL long long
#define vi vector<int>
#define forn(xx,yy,zz) for(int zz = xx; zz <= yy; ++zz)
#define forl(xx,yy,zz) for(int zz = xx; zz >= yy; --zz)
#define str string
#define eps 1e-7
#define pi M_PI
#define sz(x) (int)x.size()
#define fill(x,v) memset(x, (v), sizeof(x))
#define psz 11000000

int n, a[1000001], cnt[psz + 10], p[maxn], sz, m, l, r;
bool used[maxn];
long long sum[maxn], ans[psz + 10];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("in", "r", stdin);
    #endif

    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]), cnt[a[i]]++;

    used[1] = used[0] = 1;
    for (int i = 2; i <= psz; ++i)
        if (!used[i])
        {
            p[++sz] = i;
            ans[i] = cnt[i];
            for (int j = 2 * i; j <= psz; j += i)
                ans[i] += cnt[j], used[j] = 1;
        }

    scanf("%d", &m);

    for (int i = 1; i <= sz; ++i)
        sum[i] = sum[i - 1] + ans[p[i]];

    while (m--)
    {
        scanf("%d%d", &l, &r);

        int lf = int(lower_bound(p + 1, p + sz + 1, l) - p);
        int rg = int(upper_bound(p + 1, p + sz + 1, r) - p) - 1;

        if (lf <= rg && p[lf] >= l && p[lf] <= r && p[rg] >= l && p[rg] <= r)
            printf("%I64d\n", sum[rg] - sum[lf - 1]);
        else
            puts("0");
    }
}