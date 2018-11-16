#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
 
ll mod=1e9+7;
 
ll modexp(ll x,ll n)
{
    if(n==0)
        return 1;
    if(n%2==0)
    {
        ll y=modexp(x,n/2)%mod;
        return (y*y)%mod;
    }
    return (x*modexp(x,n-1)%mod)%mod;
}

string s;
int a[1000][1000];
int dp[1000][1000];
int dp2[1000][1000];

int main()
{
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
    	cin>>s;
    	for(int j=0;j<m;j++)
    	{
    		if(s[j]=='.')
    			a[i+1][j+1]=1;
    		else
    			a[i+1][j+1]=0;
    	}
    }
    for(int i=1;i<=n;i++)
    {
    	for(int j=2;j<=m;j++)
    	{
    		if(a[i][j]==1&&a[i][j-1]==1)
    		{
    			dp[i][j]+=dp[i][j-1]+1;
    		}
    		else
    		{
    			dp[i][j]+=dp[i][j-1];
    		}
    	}
    }
    for(int j=1;j<=m;j++)
    {
    	for(int i=2;i<=n;i++)
    	{
    		if(a[i][j]==1&&a[i-1][j]==1)
    		{
    			dp2[i][j]+=dp2[i-1][j]+1;
    		}
    		else
    		{
    			dp2[i][j]+=dp2[i-1][j];
    		}
    	}
    }
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=m;j++)
    	{
    		dp[i][j]+=dp[i-1][j];
    		dp2[i][j]+=dp2[i][j-1];
    	}
    }
    int q,x1,x2,y1,y2;
    scanf("%d",&q);
    while(q--)
    {
    	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    	int ans=dp[x2][y2]-dp[x1-1][y2]-dp[x2][y1-1]+dp[x1-1][y1-1];
    	//cout<<"here="<<dp[x2][y1-1]<<endl;
    	ans+=dp2[x2][y2]-dp2[x1-1][y2]-dp2[x2][y1-1]+dp2[x1-1][y1-1];
    	for(int i=y1;i<=y2;i++)
    	{
    		if(a[x1][i]&&a[x1-1][i])
    		{
    			//cout<<x1<<"i="<<i<<endl;
    			ans--;
    		}
    	}
    	for(int i=x1;i<=x2;i++)
    	{
    		if(a[i][y1]&&a[i][y1-1])
    			ans--;
    	}
    	printf("%d\n",ans);
    }
    return 0;
} 
