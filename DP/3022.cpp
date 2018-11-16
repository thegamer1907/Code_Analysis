#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double 
#define endl "\n"
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define fr(i,n) for(i=1;i<=n;i++)

typedef pair<int, int> II;
typedef vector< II > VII;
typedef vector<int> VI;

ll dp[5010][5010], a[5010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll n,m,k,i,j;
    cin>>n>>m>>k;
    fr(i,n) cin>>a[i], a[i]+=a[i-1];
    for(i=1;i<=n;i++)
        for(j=1;j<=k && j<=i/m;j++)
            dp[i][j]=max(dp[i-1][j], dp[i-m][j-1]+a[i]-a[i-m]);
    cout<<dp[n][k]<<endl;
    return 0;
}
