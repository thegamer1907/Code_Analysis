#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int a[maxn];
int dp[maxn];
int main()
{
    int N;
    while(cin>>N)
    {
        for(int i=1;i<=N;i++)
        {
            cin>>a[i];
            dp[i]=1;
        }
        int ans=1;
        for(int i=2;i<=N;i++)
        {
            if(a[i]>a[i-1])
                dp[i]=dp[i-1]+1;
            ans=max(ans,dp[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
