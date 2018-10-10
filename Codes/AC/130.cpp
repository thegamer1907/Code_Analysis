#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N=100001;

ll A[N];
vector<ll> v;

int main(){
	ll n;
	cin>>n;
	for(ll i=0; i<n; i++){
		cin>>A[i];
	}
	v.push_back(A[0]);
	for(ll i=1; i<n; i++){
		v.push_back(v[i-1]+A[i]);
	}
	ll q;
	cin>>q;
	ll x;
	for(ll i=0; i<q; i++){
		cin>>x;
		ll pos=lower_bound(v.begin(),v.end(),x)-v.begin();
		cout<<pos+1<<endl;
	}
	return 0;
}

