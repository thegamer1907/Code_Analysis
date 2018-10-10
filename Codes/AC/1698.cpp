#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,m;
	cin>>n>>m;
	ll k;cin>>k;
	ll start=1;
	ll end=n*m;
	while(start<=end){
		ll mid=(start+end)>>1LL;
		ll smaller=0;
		for(ll i=1; i<=n; i++){
			ll st=mid/i;
			if((mid%i)==0) st-=1LL;
			if(st>m) st=m;
			
			smaller+=(st);
		}
		if(smaller<k) start=mid+1;
		else end=mid-1;
	}
	cout << end<<endl;
	return 0;
}