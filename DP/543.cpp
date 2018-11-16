#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int dp[maxn];
main()
{

    string s;
    int n;
    cin>>s>>n;
    int ans[n];
    for(int i=1;i<=s.size();i++)
    {
        dp[i]+=dp[i-1];
        if(s[i]==s[i-1])dp[i]++;
    }
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        ans[i]=dp[y-1]-dp[x-1];
    }
    for(int i=0;i<n;i++)cout<<endl<<ans[i];
    return 0;
}