#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    ll n,k;
    cin>>n>>k;
    ll M = 1e9+7;

    vector<vector<ll>>DP(n+1,vector<ll>(k+1,0)); //[last][length]
    for(int i=1; i<=n; i++)DP[i][1]=1;

        for(int i=1; i<=k; i++) // lenght
        for(int j=1; j<=n; j++) // last
        for(int x=j; x<=n; x+=j)
        DP[x][i] = (DP[x][i] + DP[j][i-1])%M;

    ll ats = 0;

    for(int i=1; i<=n; i++)
        ats = (ats+DP[i][k])%M;

    cout<<ats<<"\n";
}
