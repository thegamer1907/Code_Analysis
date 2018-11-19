#include <bits/stdc++.h>

using namespace std;

const int MaxN = 1e5 + 15;
const int MaxK = 22;
const long long INF = 1e9 * 1ll * 1e9;

int a[MaxN];
long long dp[MaxN][MaxK];
int b[MaxN][MaxK];

int cnt[MaxN];

int curL, curR;
long long sum;

void add(int pos)
{
    if(pos > 0)
        sum += cnt[a[pos]]++;
}

void del(int pos)
{
    if(pos > 0)
        sum -= --cnt[a[pos]];
}

void up(int l, int r)
{
    while(curL < l)
        del(curL++);
    while(curR > r)
        del(curR--);
    while(l < curL)
        add(--curL);
    while(r > curR)
        add(++curR);
}

void clear()
{
    sum = 0;
    curL = curR = 0;
    memset(cnt, 0, sizeof(cnt));
}

void solve(int h, int L, int R, int oL, int oR)
{
    if(L > R)
        return;
    int m = (L + R) / 2;

    for(int i = oL; i <= min(m, oR); ++i)
    {
        up(i, m);
        if(sum + dp[i - 1][h - 1] < dp[m][h])
        {
            dp[m][h] = sum + dp[i - 1][h - 1];
            b[m][h] = i;
        }
    }

    solve(h, L, m - 1, oL, b[m][h]);
    solve(h, m + 1, R, b[m][h], oR);
}

int main()
{
//    freopen("input.txt", "r", stdin);
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;

    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    for(int i = 0; i <= n; ++i)
        for(int j = 0; j <= k; ++j)
        {
            dp[i][j] = INF;
            b[i][j] = 1;
        }

    dp[0][0] = 0;
    for(int i = 1; i <= n; ++i)
    {
        up(1, i);
        dp[i][1] = sum;
    }
    for(int i = 2; i <= k; ++i)
    {
        solve(i, 1, n, 1, n);
        clear();
    }

    cout << dp[n][k] << '\n';
}
