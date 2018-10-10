#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
bool check(ll k) {
	ll t=n;
	ll a=0,b=0;
	while (t>0) {
		if (t>=k) {
			a+=k;
			t-=k;
		}
		else {
			a+=t;
			t=0;
		}
		b+=t/10;
		t=t-t/10;
	}
	if (a>=b) return true;
	else return false;
}
int main() {
	cin>>n;
	ll l=1,r=n+1,mid;
	while (r-l>1) {
		mid=(l+r)/2;
		if (check(mid)) r=mid;
		else l=mid;
	}
	for (ll i=l; i<=r; i++) {
		if (check(i)) {
			cout<<i<<endl;
			exit(0);
		}
	}
	return 0;
}