#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10, K = 22;
int n, k, A[N], C[N];
long long tot, dp[N][K];
inline void Add(int i)
{
    tot += C[A[i]];
    C[A[i]] ++;
}
inline void Del(int i)
{
    C[A[i]] --;
    tot -= C[A[i]];
}
void Solve(int l, int r, int le, int ri, int j)
{
    if (r < l) return ;
    int md = (l + r) >> 1, opt;
    for (int i = l; i <= md; i++)
        Add(i);
    for (int i = le; i <= min(ri, md); i++)
    {
        if (dp[md][j] > dp[i - 1][j - 1] + tot)
            dp[md][j] = dp[i - 1][j - 1] + tot, opt = i;
        Del(i);
    }
    for (int i = le; i <= min(ri, md); i++)
        Add(i);
    for (int i = l; i <= md; i++)
        Del(i);
    Solve(l, md - 1, le, opt, j);
    for (int i = l; i <= md; i++)
        Add(i);
    for (int i = le; i < opt; i++)
        Del(i);
    Solve(md + 1, r, opt, ri, j);
    for (int i = le; i < opt; i++)
        Add(i);
    for (int i = l; i <= md; i++)
        Del(i);
}
int main()
{
    scanf("%d%D", &n, &k);
    for (int i = 1; i <= n; i++)
        scanf("%d", &A[i]);
    memset(dp, 63, sizeof(dp)); dp[0][0] = 0;
    for (int i = 1; i <= k; i++)
        Solve(i, n, i, n, i);
    return !printf("%lld", dp[n][k]);
}