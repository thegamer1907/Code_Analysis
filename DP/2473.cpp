#include <bits/stdc++.h>
using namespace std;
#define m 1000000007
#define int long long int
signed main()
{
    int t,k,a,b,i,ans=0;
    cin>>t;
    cin>>k;
    int dp[100008];
    dp[0]=1;
    for(i=1;i<k;i++)
    {
        dp[i]=1;
    }
    for(;i<=100005;i++)
    {
        dp[i]=(dp[i-1]%m+dp[i-k]%m)%m;
    }
    for(i=1;i<=100005;i++)
    {
        dp[i]=(dp[i-1]%m+dp[i]%m)%m;
    }
    while(t--)
    {
        cin>>a>>b;
        cout<<(dp[b]%m-dp[a-1]%m+m)%m<<endl;
    }
    return 0;
}
