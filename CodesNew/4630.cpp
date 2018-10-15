#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N=100001;

vector<ll> v;
bool vis[N];

ll f(ll x){
	ll cnt=0;
	ll p=0;
	for(ll i=x; i<v.size(); i++){
		if(v[i]>=v[p]*2 && p<x){
			cnt++;
			p++;
		}
	}
	return cnt;
}

ll bt(ll l, ll r){
	while(r-l>3){
		ll m1=l+(r-l)/3;
		ll m2=r-(r-l)/3;
		if(f(m1)<f(m2)){
			l=m1;
		}else{
			r=m2;
		}
	}
	ll mx=0;
	for(ll i=l; i<=r; i++){
		mx=max(f(i),mx);
	}
	return mx;
}

//

int main(){
	ll n;
	cin>>n;
	ll x;
	for(ll i=0; i<n; i++){
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	cout<<n-bt(0,n-1)<<endl;
	return 0;
}