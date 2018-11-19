#include <bits/stdc++.h>
#define int long long
using namespace std;

const int maxn = 1e5 + 7;
const int inf = 1e15 + 7;
int n, m, a[maxn], cnt[maxn], cost[maxn], L, R, dp[23][maxn], ans;

void Add(int x)
{
    ans += cost[a[x]];
    cost[a[x]]++;
}

void Delete(int x)
{
    ans -= cost[a[x]] - 1;
    cost[a[x]]--;
}

void Get(int l, int r)
{
    while(L > l) Add(--L);
    while(r > R) Add(++R);
    while(L < l) Delete(L++);
    while(R > r) Delete(R--);
}

bool Min(int &a, int b)
{
    if(a > b)
    {
        a = b;
        return true;
    }
    return false;
}

void ChiaDeTri(int g, int L, int R, int optL, int optR)
{
    if(L > R) return;
    int mid = L + R >> 1;
    dp[g][mid] = inf;
    int lim = min(mid, optR);
    int gau = 0;
    for(int i = optL; i <= lim; i++)
    {
        Get(i, mid);
        if(Min(dp[g][mid], dp[g - 1][i - 1] + ans)) gau = i;
    }
    ChiaDeTri(g, L, mid - 1, optL, gau);
    ChiaDeTri(g, mid + 1, R, gau, optR);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("test.inp", "r", stdin);
    //freopen("test.out", "w", stdout);
    cin >> n >> m;
    L = 1;
    R = n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ans += cost[a[i]];
        cost[a[i]]++;
        dp[1][i] = ans;
    }
    for(int i = 2; i <= m; i++) ChiaDeTri(i, 1, n, 1, n);
    cout << dp[m][n];
}
