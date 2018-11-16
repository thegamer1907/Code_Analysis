#include<bits/stdc++.h>
#define MAX 5002
#define pb push_back
#define For(i,s,e) for (ll i=(s); i<(e); i++)
#define Debug_array(a,n) for (ll i=(0); i<(n); i++) cout<<a[i]<<" "
#define Foe(i,s,e) for (ll i=(s); i<=(e); i++)
#define Fod(i,s,e) for (ll i=(s)-1; i>=(e); i--)
#define Mod 1000000007
#define pii pair<ll,ll>
#define fi first
#define se second
#define endl "\n"

using namespace std;

typedef long long ll;

class Disjoint_Sets{
public:
	ll* parent;
	ll* size;
	Disjoint_Sets(ll n){
		parent = new ll[n];
		size = new ll[n];
		For(i,0,n) parent[i]=i;
		For(i,0,n) size[i]=1;
	}
	void merge(ll a,ll b){
		ll parent_a = find(a);
		ll parent_b = find(b);
		if(parent_a==parent_b) return;
		if(size[parent_a]<size[parent_b]){
			parent[parent_a] = parent_b;
			size[parent_b] += size[parent_a];
			size[parent_a] = 0;
		}else{
			parent[parent_b] = parent_a;
			size[parent_a] += size[parent_b];
			size[parent_b] = 0;
		}
	}
	ll find(ll a){
		if(parent[a]==a){
			return a;
		}
		parent[a]=find(parent[a]);
		return parent[a];
	}
}; 

int main(){
	ios_base::sync_with_stdio(false);
	
	ll n;cin>>n;
	Disjoint_Sets d(n);
	vector<pii> x;
	For(i,0,n){
		ll u;cin>>u;u--;
		x.pb(make_pair(u,i));
	}

	sort(x.begin(),x.end());

	For(i,0,n){
		d.merge(x[i].fi,x[i].se);
	}

	ll f[n];
	For(i,0,n) f[i]=0;
	For(i,0,n){
		f[d.parent[i]]=1;
	}
	ll ans=0;
	For(i,0,n) ans+=f[i];
	cout<<ans<<endl;
}