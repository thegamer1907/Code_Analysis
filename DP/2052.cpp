#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,i,a[200005],dp[200005],hash[200005]={0},x;
   cin>>n>>m;
   
   for(i=1;i<=n;i++)
   cin>>a[i];
   
   dp[n+1]=0;
    for(i=n;i>=1;i--)
    {
        if(hash[a[i]] == 0)
        {
            dp[i] = dp[i+1]+1;
            hash[a[i]]++;
        }
        else
        {
            dp[i] = dp[i+1];
            hash[a[i]]++;
        }
    }
    // for(i=1;i<=n;i++)
    // cout<<dp[i]<<" ";
    // cout<<endl;
    while(m--)
    {
        cin>>x;
        cout<<dp[x]<<endl;
    }
}