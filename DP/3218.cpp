#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double ld;
typedef vector<ll> vi;
// push_back insert lower_bound upper_bound erase
#define F(a) for ( ll i = 0; i < (ll)(a); ++i )

int main() {
    ios::sync_with_stdio(false);
    ll N,B;cin>>N>>B;
    vi a(N);F(N)cin>>a[i];
    ll c=0;
    vi res;
    F(N-1){
        c+=(a[i]%2?1:-1);
        if(c==0){
            ll val=abs(a[i]-a[i+1]);
            res.push_back(val);
        }
    }
    sort(res.begin(),res.end());
    ll s=0,idx=0;
    while(idx<res.size() && s+res[idx]<=B){
        s+=res[idx++];
    }
    cout<<idx<<endl;
    return 0;
}

