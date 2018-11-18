#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FR(i,a,b) for(int i=a; i<b; ++i)
#define BR(i,a,b) for(int i=(b-1); i>=0; --i)
#define FA(i,a) for(auto i : a)
#define PB emplace_back
#define trace(x) cerr<<#x<<":"<<x<<'\n';
#define trace2(a,n) { cerr<<#a<<" = "; FR(_,0,n) cerr << a[_] << ' '; cerr <<'\n'; }

vector<pair<ll,ll> > data;
vector<ll> adj[105];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	string pass;
	cin>>pass;
	ll n;
	cin>>n;
	bool ab = false;
	bool f = false, s = false;
	FR(i,0,n){
		string temp;
		cin>>temp;
		if( temp == pass ){ ab = true; }
		if( temp[1] == pass[0] ){ s = true; }
		if( temp[0] == pass[1] ){ f = true; }
	}
	if( ab or ( s and f ) ){ cout<<"YES\n"; }
	else{ cout<<"NO\n"; }
	
	#ifdef LOL
	    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	#endif
	return 0;
}
