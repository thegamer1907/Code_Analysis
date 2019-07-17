#include <bits/stdc++.h>
using namespace std;
#define long long long int
int main()
{
    long n,m,k;
    cin>>n>>m>>k;
    long arr[m];
    for(long i=0;i<m;i++) cin>>arr[i];
    long dp[m];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    long tr=0;
    for(long i=1;i<m;i++)
    {
        long q1=arr[i]-tr;
        long q2=arr[i-1]-tr;
        long w1,w2;
        w1=(q1-1)/k;
        w2=(q2-1)/k;
        if(w1==w2) dp[i]=dp[i-1];
        else
        {
            tr=i;
            dp[i]=dp[i-1]+1;
        }
    }
    cout<<dp[m-1];
    return 0;
}