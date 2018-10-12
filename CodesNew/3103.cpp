#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FR(i,a,b) for(int i=a; i<b; ++i)
#define BR(i,a,b) for(int i=(b-1); i>=0; --i)
#define FA(i,a) for(auto i : a)
#define PB emplace_back
#define trace(x) cerr<<#x<<":"<<x<<'\n';
#define trace2(a,n) { cerr<<#a<<" = "; FR(_,0,n) cerr << a[_] << ' '; cerr <<'\n'; }
const int LIM = 3e5 + 5;
ll n,k;
ll ind1, ind2;
ll pre[LIM];
ll data[LIM];

bool check(ll x){
  bool status = false;
	for(int i=1; i<= n-x+1; ++i){
		int j = i + x -1;
		ll ans = pre[j] - pre[i-1];
		if( ans <= k ){ status = true; ind1 = i; ind2 = j; }
	}
	return (status);
}

ll binsearch(ll lo, ll hi){
	while( lo < hi ){
		ll mid = ( lo + hi )/2;
		if( check(mid) == false ){ hi = mid; }
		else{ lo = mid + 1; }
	}
	return lo-1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>n>>k;
	for(int i=1; i<=n; ++i){
		cin>>data[i];
	}
	pre[0] = 0;
	for(int i=1; i<=n; ++i){
		pre[i] += pre[i-1];
		pre[i] += (data[i] == 0 );
	}
	ll ans = binsearch(1,n+1);
	cout<<ans<<'\n';
	for(int i=ind1; i<= ind2; ++i){ data[i] = 1; }
	for(int i=1; i<=n; ++i){ cout<<data[i]<<" "; }
	cout<<'\n';

	#ifdef LOL
	    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	#endif
	return 0;
}
