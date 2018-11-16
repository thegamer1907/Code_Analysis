#include <bits/stdc++.h>

using namespace std;

const int maxn=110;
int b[maxn], g[maxn], dp[maxn][maxn];

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>b[i];
    sort(b+1, b+n+1);

    int m;
    cin>>m;
    for(int i=1; i<=m; i++)
        cin>>g[i];
    sort(g+1, g+m+1);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(abs(b[i]-g[j])<=1)
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

            //cout<<i<<" "<<j<<" "<<dp[i][j]<<endl;
        }
    }

    cout<<dp[n][m];


    return 0;
}
