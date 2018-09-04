#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double ld;
typedef vector<ll> vi;
// push_back insert lower_bound upper_bound erase
#define F(a) for ( ll i = 0; i < (ll)(a); ++i )
// INF for (int) = ( 1<<30 ), for (long long) = ( 1LL<<62LL )
ll search(ll low, ll high, bool(*cmp)(ll)){
	ll mid;
	while(low < high){
		mid = (low+high)/2;
		if(cmp(mid)) high = mid;
		else low = mid+1;
	}
	return low;
}
ll N;
bool cmp(ll val){
    if(val==0)return false;
    //cout<<"check "<<val;
    ll s=0,M=N;
    while(M>0){
        s+=min(M,val);
        M=max(0ll,M-val);
        M-=(ll)(M/10);
    }
    //cout<<" -> "<<s<<"/"<<N<<endl;
    return 2*s>=N;
}

int main() {
    ios::sync_with_stdio(false);
    cin>>N;
    cout<<(search(0,1e18,cmp))<<endl;
    return 0;
}

