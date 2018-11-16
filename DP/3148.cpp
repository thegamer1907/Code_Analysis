///I'm Chefer now ;)

#include <bits/stdc++.h>
#define int long long int

using namespace std;
char c[1000][1000];
int dp[1000][1000];
int h,w,q;
main()
{
    cin>>h>>w;
    for(int i=1;i<=h;i++)
        for(int j=1;j<=w;j++)
            cin>>c[i][j];
    cin>>q;
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
            if(c[i][j]=='.')
            {
                if(c[i-1][j]=='.')
                    dp[i][j]++;
                if(c[i][j-1]=='.')
                    dp[i][j]++;
            }
        }
    }
    int r1,r2,c1,c2,ans;
    for(int i=1;i<=q;i++)
    {
        cin>>r1>>c1>>r2>>c2;
        ans=dp[r2][c2]+dp[r1-1][c1-1]-dp[r1-1][c2]-dp[r2][c1-1];
        for(int i=c1;i<=c2;i++)
        {
            if(c[r1][i]=='.'&&c[r1-1][i]=='.')
                ans--;
        }
        for(int i=r1;i<=r2;i++)
        {
            if(c[i][c1]=='.'&&c[i][c1-1]=='.')
                ans--;
        }
        cout<<ans<<endl;
    }
}
