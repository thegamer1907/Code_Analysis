#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl ;

const ll inf = 1e9 + 111;
const int maxn = 1e5 + 10;
const int maxq = 1e6 +10;
const int alf = 26;

int dp[maxn];

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    dp[0] = 0;
    string st;cin>>st;
    int n = st.size();int m;cin>>m;
    char o = st[0];
    for(int i=2;i<=n;i++){
        int u = i -1;
        dp[i]=dp[i-1];
        if(st[u]==o)dp[i]++;
        o = st[u];
    }
    for(int i=0;i<m;i++){
        int l,r;cin>>l>>r;
        cout<<dp[r]-dp[l]<<"\n";
    }
    return 0;
}

