#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*void maxSubseqSum(ll A[],ll S,ll n)
{
     dp[0]=A[0];
     for(ll i=1;i<n;i++){
        dp[i]=max(A[i],A[i]+dp[i-1]);
     }
     cout<<*max_element(A,A+n)+S;
}*/
ll dp[104];
int main()
{
    ll n;cin>>n;
    ll x;ll b[n];ll ones=0;
    for(ll i=0;i<n;i++){
        cin>>x;
        if(x==1){b[i]=-1;ones++;}
        else b[i]=1;
    }
     dp[0]=b[0];
     for(ll i=1;i<n;i++){
        dp[i]=max(b[i],b[i]+dp[i-1]);
     }
     cout<<*max_element(dp,dp+n)+ ones;
     return 0;
}
