#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100010;

int num[MAXN];
bool mark[MAXN];

int main(void)
{
    int n, q;
    scanf("%d %d", &n, &q);

    for (int i = 1; i <= n; i++)
        scanf("%d", &num[i]);

    int dp[MAXN];
    dp[n] = 1;
    mark[num[n]] = 1;
    for (int i = n-1; i > 0; i--)
    {
        dp[i] = dp[i+1];
        if (!mark[num[i]])
        {
            mark[num[i]] = 1;
            dp[i] = dp[i+1]+1;
        }
    }

    while (q--)
    {
        int x;
        scanf("%d", &x);
        printf("%d\n", dp[x]);
    }
}
