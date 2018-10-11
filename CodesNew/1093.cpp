#include <bits/stdc++.h>
#define ll long long
#define x first
#define y second
#define pb push_back
using namespace std;
ll n;
bool f(ll k){
	ll temp;
	temp=n;
	ll cnt=0;
	while(temp>0){
		cnt+=min(k,temp);
		temp-=min(k,temp);
		ll t;
		t=temp/10;
		temp-=t;
	}
	if(cnt>=(n+1)/2){
		return 1;
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	ll l=1,r=n;
	while(l<r){
		ll mid;
		mid=(l+r)/2;
		if(f(mid))
			r=mid-1;
		else
			l=mid+1;
	}
	ll i;
	for(i=l-1;i<=l+1;i++){
		if(i<=0){
			continue;
		}
		if(f(i)){
			cout<<i;
			return 0;
		}
	}
	return 0;
}