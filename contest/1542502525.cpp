#include <bits/stdc++.h>
#define maxn 100005

using namespace std;

const long long maxnum = 1234567891011;
long long sum = 0, n, k, L = 1, R = 0;
long long dp[2][maxn], a[maxn], dd[maxn];
bool tt = 0;

void next(int l, int r)
{
    while (l < L)
        sum += dd[a[--L]]++;
    while (R < r)
        sum += dd[a[++R]]++;
    while (l > L)
        sum -= --dd[a[L++]];
    while (R > r)
        sum -= --dd[a[R--]];
    return ;
}

void solve (int l, int r, int pl, int pr)
{
    if (l > r)
        return;
    int pos = l, mid = (l+r)/2;
    for (int i = pl; i <= mid && i <= pr; i++)
    {
        next(i, mid);
        if (dp[!tt][i-1] + sum < dp[tt][mid])
                {
                    pos = i;
                    dp[tt][mid] = dp[!tt][i-1] + sum;
                }
    }
    solve (l, mid-1, pl, pos);
    solve (mid+1, r, pos, pr);
}

int main()
{
    //freopen("inp.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin >> n >> k;
    memset(dd, 0, sizeof(dd));
    dp[tt][0] = maxnum;
    for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            next(1, i);
            dp[tt][i] = sum;
        }
    for (int i = 2; i <= k; i++)
    {
        tt = !tt;
        for (int j = 0; j <= n; j++)
            dp[tt][j] = maxnum;
        solve (1, n, 1, n);
    }
    cout << dp[tt][n];
    return 0;
}
