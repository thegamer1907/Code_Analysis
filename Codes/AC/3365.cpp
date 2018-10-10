#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool ok(ll x, ll n) {
	ll sum=0, cur=n, t;
	while(cur>0)
		t=min(cur,x),
		sum+=t,
		cur-=t,
		cur-=cur/10;
	return sum*2>=n;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	ll l=1, r=n, ret=r;
	while(l<=r) {
		ll x=(l+r)/2;
		if(ok(x,n)) ret=x, r=x-1;
		else l=x+1;
	}
	cout << ret << endl;
	return 0;
}
