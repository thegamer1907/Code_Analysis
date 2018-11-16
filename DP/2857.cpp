#include<bits/stdc++.h>
#define int long long
int mod=1000000007;
using namespace std;
 main()
{
    int n,k;cin>>n>>k;
    vector<vector<int> >a(n+1);
    static int dp[2000+5][2000+5];
    for(int i=1;i<=n;i++)
        dp[0][i]=1;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
        if(i%j==0)
        a[i].push_back(j);
        int sum=0;
    for(int i=1;i<k;i++)
        for(int j=1;j<=n;j++)
    {
        dp[i][j]=0;
    for(int k=0;k<a[j].size();k++)
        dp[i][j]+=dp[i-1][a[j][k]];
    dp[i][j]%=mod;

    }
    for(int j=1;j<=n;j++)
        sum+=dp[k-1][j];
    cout<<sum%mod;


}
