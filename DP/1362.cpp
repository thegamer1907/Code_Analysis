#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
ll x[1000];
ll dp[1000];
int main()
{
    ll n;
    cin>>n;
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>x[i];
        sum+=x[i];
    }
    dp[0]=sum;
    if(x[0]==1)dp[0]--;
    else dp[0]++;
    ll Max = dp[0];
    for(int i=1;i<n;i++){
        dp[i]=max(dp[i-1],sum);
        if(x[i]==1)dp[i]--;
        else dp[i]++;
        Max = max(Max , dp[i]);
    }
    cout<<Max;
    return 0;
}
