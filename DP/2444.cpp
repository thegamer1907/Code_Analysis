#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  ff first
#define  ss second
ll dp[100100];
ll sum[100100];
ll mod=1000000007;
int main(){
int n,k;
cin>>n>>k;dp[0]=1;
for(int i=1;i<100010;i++)
{
    if(i-k>=0)
    {
        dp[i]+=dp[i-k];
    }
    dp[i]+=dp[i-1];
    dp[i]%=mod;
}
for(int i=1;i<=100010;i++)
    sum[i]=sum[i-1]+dp[i];
while(n--)
{
    int a,b;
    cin>>a>>b;
    ll k=sum[b]-sum[a-1];
    k%=mod;
    cout<<k<<endl;
}

    return 0;
}
