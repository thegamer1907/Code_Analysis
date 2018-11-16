#include<bits/stdc++.h>
using namespace std;
const int maxn=505;
typedef long long ll;
ll dp[maxn][maxn];
char s[maxn][maxn];
int N,M;
int main()
{
    ios::sync_with_stdio(false);
    while(cin>>N>>M)
    {
        for(int i=1;i<=N;i++)
            cin>>s[i]+1;
        memset(dp,0,sizeof(dp));
        for(int i=2;i<=M;i++)
        {
            if(s[1][i]=='.'&&s[1][i-1]=='.')
                dp[1][i]=dp[1][i-1]+1;
            else
                dp[1][i]=dp[1][i-1];
        }
        for(int i=2;i<=N;i++)
        {
            if(s[i][1]=='.'&&s[i-1][1]=='.')
                dp[i][1]=dp[i-1][1]+1;
            else
                dp[i][1]=dp[i-1][1];
        }
        for(int i=2;i<=N;i++)
        {
            for(int j=2;j<=M;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
                if(s[i][j]=='.'&&s[i-1][j]=='.')
                    dp[i][j]++;
                if(s[i][j]=='.'&&s[i][j-1]=='.')
                    dp[i][j]++;
            }
        }
        int Q;
        cin>>Q;
        int x1,x2,y1,y2;
        while(Q--)
        {
            cin>>x1>>y1>>x2>>y2;
            ll ans=dp[x2][y2]-dp[x2][y1-1]-dp[x1-1][y2]+dp[x1-1][y1-1];
            if(x1>1)
            {
                for(int i=y1;i<=y2;i++)
                {
                    if(s[x1][i]=='.'&&s[x1-1][i]=='.')
                        ans--;
                }
            }
            if(y1>1)
            {
                for(int i=x1;i<=x2;i++)
                {
                    if(s[i][y1]=='.'&&s[i][y1-1]=='.')
                        ans--;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
