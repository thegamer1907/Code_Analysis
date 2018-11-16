#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int MAX = 1001;
int An[MAX], Bn[MAX], dp[MAX][MAX];

int main()
{
    int n, m;
    cin>>n;
    for(int i = 1; i <= n; i++)
        cin>>An[i];
    cin>>m;
    for(int i = 1; i <= m; i++)
        cin>>Bn[i];
    sort(An+1, An+n+1);
    sort(Bn+1, Bn+m+1);

    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            dp[i][j] = max(dp[i-1][j], dp[i][j]);
            dp[i][j] = max(dp[i][j-1], dp[i][j]);

            if(abs(An[i] - Bn[j]) <= 1)
                dp[i][j] = max(dp[i-1][j-1]+1, dp[i][j]);
        }
    }
    cout<<dp[n][m];
    return 0;
}