#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

char mat[505][505];
ll dp[505][505];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int h,w,q;
    cin>>h>>w;
    for(int i=0;i<=w;i++)
        mat[0][i] = '#';
    for(int i=1;i<=h;i++)
    {
        mat[i][0] = '#';
        for(int j=1;j<=w;j++)
            cin>>mat[i][j];
    }

    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            dp[i][j] = dp[i][j-1];
            if(mat[i][j] == '.' && mat[i][j-1] == '.')
                dp[i][j]++;
        }
        
        for(int j=1;j<=w;j++)
        {
            dp[i][j] += dp[i-1][j];
            for(int k=1;k<=j;k++)
            {
                if(mat[i][k] == '.' && mat[i-1][k] == '.')
                    dp[i][j]++;
            }
        }
    }
    cin>>q;
    while(q--)
    {
        int r1,r2,c1,c2;
        cin>>r1>>c1>>r2>>c2;

        ll ans = dp[r2][c2] - dp[r1-1][c2] - dp[r2][c1-1] + dp[r1-1][c1-1];
        for(int i=r1;i<=r2;i++)
        {
            if(mat[i][c1-1] == '.' && mat[i][c1] == '.')
                ans--;
        }
        for(int i=c1;i<=c2;i++)
        {
            if(mat[r1-1][i] == '.' and mat[r1][i] == '.')
                ans--;
        }
        cout<<ans<<endl;
    }

    return 0;
}