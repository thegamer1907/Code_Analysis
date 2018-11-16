#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)cin>>b[i];
    int dp[n][m];
    sort(a,a+n);
    sort(b,b+m);
    //******
    if(fabs(a[0]-b[0])<2)dp[0][0]=1;
    else dp[0][0]=0;
    for(int i=1;i<n;i++)
    {
        if(fabs(a[i]-b[0])<2)dp[i][0]=1;
        else dp [i][0] = dp [i-1][0];
    }

    for(int j=1;j<m;j++)
    {
        if(fabs(b[j]-a[0])<2)dp[0][j]=1;
        else dp[0][j]=dp[0][j-1];
    }
    //******
    for(int i=1;i<n;i++) 
    {
        for(int j=1;j<m;j++)
        {
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            if(fabs(a[i]-b[j])<2)dp[i][j]=dp[i-1][j-1]+1;
        }
    }
        cout<<dp[n-1][m-1];
    return 0;
}