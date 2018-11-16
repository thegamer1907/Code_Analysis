#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define speed std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
///#define int long long

using namespace std;
char a[505][505];
int dp[505][505];
set<pair<int, int> > sc[505],sr[505];
int h,w;
int solve(int r, int c)
{
    //cout<<"lol";
    int ans=0;
    if(dp[r][c]!=-1)
        return dp[r][c];
    if(r+1<h&&a[r+1][c]=='.'&&sc[c].find(mp(r+1,r))==sc[c].end())
    {
        sc[c].insert(mp(r+1,r));
        sc[c].insert(mp(r,r+1));
        ans+=solve(r+1,c)+1;

    }
    if(r-1>=0&&a[r-1][c]=='.'&&sc[c].find(mp(r-1,r))==sc[c].end())
    {
        sc[c].insert(mp(r-1,r));
        sc[c].insert(mp(r,r-1));
        ans+=solve(r-1,c)+1;

    }
    if(c+1<w&&a[r][c+1]=='.'&&sr[r].find(mp(c+1,c))==sr[r].end())
    {
        sr[r].insert(mp(c+1,c));
        sr[r].insert(mp(c,c+1));
        ans+=solve(r,c+1)+1;

    }
    if(c-1>=0&&a[r][c-1]=='.'&&sr[r].find(mp(c-1,c))==sr[r].end())
    {
        sr[r].insert(mp(c-1,c));
        sr[r].insert(mp(c,c-1));
        ans+=solve(r,c-1)+1;

    }
    dp[r][c]=ans;

    return ans;
}

int main()
{
    speed
  //   freopen("input.txt","r",stdin);
    // memset(dp,-1,sizeof(dp));
    //int h,w;
    cin>>h>>w;
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=w; j++)
        {
            cin>>a[i][j];
        }
    }
    // solve(0,0);
    dp[0][0]=0;
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=w; j++)
        {
            if(i==1&&j==1)
            {
                dp[i][j]=0;
                continue;
            }
            if(a[i][j]=='#')
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
                if(a[i-1][j]=='.')
                {
                    dp[i][j]++;
                }
                if(a[i][j-1]=='.')
                {
                    dp[i][j]++;
                }
            }

        }
    }
   // cout<<dp[h][w]<<endl;
    //cout<<dp[5][8]<<endl;
    int q;
    cin>>q;
    while(q--)
    {
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        int ans=dp[r2][c2]-dp[r2][c1-1]-dp[r1-1][c2]+dp[r1-1][c1-1];
        if (c1 >= 2)
		{
            for (int i=r1;i<=r2;i++)
			{
                if (a[i][c1] == '.' && a[i][c1-1] == '.')
				{
                    ans--;
                }
            }
        }
        if (r1 >= 2)
		{
            for (int i=c1;i<=c2;i++)
			{
                if (a[r1][i] == '.' && a[r1-1][i] == '.')
				{
                    ans--;
                }
            }
        }
        cout<<ans<<endl;
    }
//cout<<dp[2][3]<<endl;
    //cout<<dp[h][w]<<endl;
    //cout<<dp[3][4]<<endl;




    /*for(int i=0; i<4; i++)
    {
        for(int j=0; j<7; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    //cout<<dp[0][0]<<endl<<dp[1][2];
    //cout<<solve(0,0)<<endl<<dp[0][0]<<endl;;
    /*int q;
    cin>>q;
    while(q--)
    {

    }*/
    return 0;
}
