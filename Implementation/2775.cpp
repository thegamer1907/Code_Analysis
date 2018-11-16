#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double ld;
typedef vector<ll> vi;
// push_back insert lower_bound upper_bound erase
#define FOR(prom,a,b) for ( ll prom = (a); prom < (ll)(b); ++prom )
#define F(a) FOR(i,0,a)
#define FF(a) FOR(j,0,a)
// INF for (int) = ( 1<<30 ), for (long long) = ( 1LL<<62LL )

int main() {
    ios::sync_with_stdio(false);
    ll N;cin>>N;
    vi a(N);F(N)cin>>a[i];
    ll mx=0;F(N)mx=max(mx,a[i]);
    ll s=0;F(N)s+=a[i];
    cout<<(N*mx-s)<<endl;
    return 0;
}

