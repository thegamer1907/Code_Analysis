#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int n,k,dp[2000][2001];
int f(int x,int y){
    if(x>=k)return 1;
    if(dp[x][y]!=-1)return dp[x][y];
    int ret=0;
    for(int i=y;i<=n;i+=y){
        ret=(ret+f(x+1,i))%MOD;
    }
    return dp[x][y]=ret;
}
int main(){
    cin>>n>>k;
    memset(dp,-1,sizeof(dp));
    cout<<f(0,1)<<"\n";
    return 0;
}
