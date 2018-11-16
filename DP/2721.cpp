#include<iostream>

int getMax(int a, int b, int c)
{
    return std::max(a, std::max(b, c));
}

int main()
{
    int n, x[100001], h[100001], dp[100001][3];
    scanf("%d", &n);
    x[0] = -1e9 - 7;
    h[0] = 0;
    x[n+1] = 2e9 + 7;
    h[n+1] = 0;
    for(int i=1;i<=n;i++)
        scanf("%d %d", &x[i], &h[i]);
    for(int i=1;i<=n;i++)
    {
        dp[i][0] = getMax(dp[i-1][0], dp[i-1][1], dp[i-1][2]);
        dp[i][1] = dp[i][2] = 0;
        if(x[i]-h[i] > x[i-1]) 
            dp[i][1] = getMax(dp[i][1], dp[i-1][0]+1, dp[i-1][1]+1);
        if(x[i]-h[i] > x[i-1]+h[i-1])
            dp[i][1] = std::max(dp[i][1], dp[i-1][2]+1);

        if(x[i]+h[i] < x[i+1])
            dp[i][2] = getMax(dp[i-1][0]+1, dp[i-1][1]+1, dp[i-1][2]+1);
    }
    printf("%d\n", getMax(dp[n][0], dp[n][1], dp[n][2]));
}
