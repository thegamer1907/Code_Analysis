#include<bits/stdc++.h>
using namespace std;
int a[1010000],dp[1010000];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        if(a[i]>a[i-1])
        dp[i]=dp[i-1]+1;
        else
        dp[i]=1;
    int maxi=0;
    for(int i=1;i<=n;i++)
    maxi=max(dp[i],maxi);
    cout<<maxi<<endl;
}
