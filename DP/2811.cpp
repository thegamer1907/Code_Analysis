#include <bits/stdc++.h>
#include <math.h>
#define ll long long
using namespace std;

int n,k,mod=1000000007;
int dp [2222][2222];
int rec(ll x,ll y,ll pre)
{
    int i,res=0;
    if (pre!=0&&x%pre!=0)
        return 0;
    if (y==k)
        return 1;
    if (x>n)
        return 0;
    if (dp[x][y]!=-1)
        return dp[x][y];
    for (i=x;i<=n;i+=x)
        res=(res%mod+rec(i,y+1,x)%mod)%mod;
    return dp[x][y]=res;
}

int main()
{
    cin >>n>>k;
    memset(dp,-1,sizeof dp);
    cout <<rec(1,0,0);
    return 0;
}