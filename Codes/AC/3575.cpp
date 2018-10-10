#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N=200001;

vector<ll> A,B,C,D;

int main(){
	ll n,m,k,x,s;
	scanf("%lld %lld %lld %lld %lld",&n,&m,&k,&x,&s);
	A.push_back(x);
	B.push_back(0);
	C.push_back(0);
	D.push_back(0);
	ll y;
	for(ll i=0; i<m; i++){
		scanf("%lld",&y);
		A.push_back(y);
	}
	for(ll i=0; i<m; i++){
		scanf("%lld",&y);
		B.push_back(y);
	}
	for(ll i=0; i<k; i++){
		scanf("%lld",&y);
		C.push_back(y);
	}
	for(ll i=0; i<k; i++){
		scanf("%lld",&y);
		D.push_back(y);
	}
	ll mn=(n*x);
	for(ll i=0; i<=m; i++){
		if(s-B[i]>=0){
			ll pos=upper_bound(D.begin(),D.end(),s-B[i])-D.begin();
			pos--;
			mn=min(mn,(n-C[pos])*A[i]);
		}
	}
	cout<<mn<<endl;
	return 0;
}

