#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i<(int)b; i++)
#define ll long long
#define all(v) (v).begin(), (v).end()
#define in freopen("test.in","rt",stdin)
#define out freopen("test.out","wt",stdout)
#define debug(x) cout << "- " << #x << " : " << x << endl;
#define tl cout<<"\nTime elapsed: "<<(1000 * clock() / CLOCKS_PER_SEC)<<"ms"

using namespace std;

const int N = 200010;

ll a[N];

map<ll , ll> dp[3];


int main(){
#ifndef ONLINE_JUDGE
    in;
#endif
    ll n,k;
    cin>>n>>k;
    rep(i,0,n) cin>>a[i];
    rep(i,0,n){
        if(!(a[i]%k)) {
            if(!(a[i]%(k*k))) dp[2][a[i]]+=dp[1][a[i]/k];
            dp[1][a[i]]+=dp[0][a[i]/k];
        }
        ++dp[0][a[i]];
    }
    ll ans = 0;
    for(auto it:dp[2]){
        ans += it.second;
    }
    cout<<ans<<"\n";
#ifndef ONLINE_JUDGE
    tl;
#endif
}