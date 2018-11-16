#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N=101;

map<ll,ll> cnt;

int main(){
	ll n,k;
	cin>>n>>k;
	ll x;
	ll cnt=0;
	for(ll i=0; i<n; i++){
		cin>>x;
		if(x>k){
			cnt++;
		}
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
