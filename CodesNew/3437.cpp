#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double ld;
typedef vector<ll> vi;
// push_back insert lower_bound upper_bound erase
#define F(a) for ( ll i = 0; i < (ll)(a); ++i )

int main() {
    ios::sync_with_stdio(false);
    ll N,K;cin>>N>>K;
    vi a(N);F(N)cin>>a[i];
    ll mx=0;F(N)mx=max(mx,a[i]);
    ll s=0;F(N)s+=a[i];
    ll c=N*mx;
    ll rmx=mx+K,rmn;
    if(K<=c-s){
        rmn=mx;
    }else{
        cerr<<"mn\n";
        rmn=mx+(K-(c-s)+N-1)/N;
    }
    cout<<rmn<<' '<<rmx<<endl;
    return 0;
}

