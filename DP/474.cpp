#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    int n,m;
    cin>>n;
    int b[n+1];
    for(int i=1;i<=n;i++) cin>>b[i];
    cin>>m;
    int g[m+1];
    for(int i=1;i<=m;i++) cin>>g[i];
    int dp[n+1];
    for(int i=0;i<=n;i++) dp[i]=0;
    sort(b+1,b+n+1);
    sort(g+1,g+m+1);
    int i=1,j=1;
    while(i<=n && j<=m){
        if(abs(b[i]-g[j])<2){
            dp[i]=dp[i-1]+1;
            i++;
            j++;
        }
        else if(b[i]<g[j]-1){
            dp[i]=dp[i-1];
            i++;
        }
        else if(b[i]-1>g[j]){
            dp[i]=dp[i-1];
            j++;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(dp[i]>ans) ans=dp[i];
    }
    cout<<ans<<endl;
    return 0;
}
