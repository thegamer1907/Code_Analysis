#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N=100001;

ll n,m,k;

ll f(ll num){
	ll sum=0;
	for(ll i=1; i<=n; i++){
		sum+=min(m,num/i);
	}
	return sum;
}

ll bb(ll l, ll r){
	while(l!=r){
		ll med=(l+r)/2;
		if(f(med)<k){
			l=med+1;
		}else{
			r=med;
		}
	}
	return l;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n>>m>>k;
	cout<<bb(1,n*m+1)<<endl;
	return 0;
}

