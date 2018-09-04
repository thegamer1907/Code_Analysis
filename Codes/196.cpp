#include <bits/stdc++.h>
#define ALL(x) x.begin(),x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c))-(c).begin())
using namespace std;
typedef long long ll;

vector<ll> v;

int main(){
	ll n,x;
	cin>>n;
	ll sum=0;
	for(ll i=0; i<n; i++){
		cin>>x;
		sum+=x;
		v.push_back(sum);
	}
	ll q;
	cin>>q;
	for(ll i=0; i<q; i++){
		cin>>x;
		vector<ll> :: iterator low;
		low=lower_bound(v.begin(),v.end(),x);
		ll aux=low-v.begin();
		cout<<aux+1<<endl;
	}
	return 0;
}
