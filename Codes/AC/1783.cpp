#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m,k;

ll pos(ll a){
	ll sum = 0;
	for(ll i=1; i<=n; i++){
		sum += min(a/i, m);
	}
	return sum;
}

int main(){
	cin>>n>>m>>k;
	ll l = 1, r = n*m;
	while(l<r){
		ll mid = l + (r-l)/2;
		if(pos(mid) < k){
			l = mid+1;
		}else{
			r= mid;
		}
	}
	cout<<l<<endl;
}