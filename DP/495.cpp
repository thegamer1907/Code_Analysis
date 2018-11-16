#include<bits/stdc++.h> 
using namespace std; 

int main(){ 
    int n; cin>>n; 
    int boys[n]; 
    for(int i=0;i<n;i++) cin>>boys[i]; 
    sort(boys,boys+n);
    int m; cin>>m; 
    int girls[m]; 
    for(int i=0;i<m;i++) cin>>girls[i]; 
    sort(girls,girls+m);
    int dp[n+1][m+1]; 
    memset(dp[0],0,sizeof(dp[0]));
    for(int i=0;i<=n;i++){ 
        dp[i][0]=0;
    } 
    for(int i=1;i<=n;i++){ 
        for(int j=1;j<=m;j++){ 
            if(abs(boys[i-1]-girls[j-1])<2){ 
                dp[i][j] = dp[i-1][j-1]+1;
            } 
            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    } 
    cout<<dp[n][m];
    return 0;
}
