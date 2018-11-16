#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 105

ll dp[MAXN][MAXN];

int main(){
    ll n,m,i,j;
    cin>>n;
    vector<ll> b(n+1);
    for(i=1;i<=n;i++) cin>>b[i];
    cin>>m;
    vector<ll> g(m+1);
    for(i=1;i<=m;i++) cin>>g[i];

    sort(b.begin(),b.end());
    sort(g.begin(),g.end());

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(abs(b[i]-g[j])<=1) dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<dp[n][m];
}