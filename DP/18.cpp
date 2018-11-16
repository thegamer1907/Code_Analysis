#include<bits/stdc++.h>

using namespace std;
#define N 102

int n, m, a[N], b[N], dp[N][N][N];

int solve(int p, int q, int flag)
{
    if(p == n+1)
        return 0;
    if(q == m+1)
        return solve(p+1, flag+1, flag);

    int &ret = dp[p][q][flag];
    if(ret != -1)
        return ret;

    int sol1 = -1e9;
    if(a[p] - b[q] >= -1 && a[p] - b[q] <= 1)
        sol1 = 1 + solve(p+1, q+1, q);

    int sol2 = solve(p, q+1, flag);


    ret = max(sol1, sol2);
    return ret;
}

int main()
{
    memset(dp, -1, sizeof dp);
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    cin >> m;
    for(int i = 1; i <= m; ++i)
        cin >> b[i];

    a[0] = b[0] = -2;
    sort(a, a+n+1);
    sort(b, b+m+1);

    cout << solve(1,1,0);
    return 0;
}
