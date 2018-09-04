#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
bool judge(ll k) {
	ll h=n,ans=0;
	while(h>0) {
		ll gg=min(h,k);
		h-=gg;
		ans+=gg;
		h-=h/10;
	}
	return ans*2>=n;
}
int main() {
	scanf("%lld",&n);
	ll l=1,r=1e18;
	while(l<r) {
		ll mid=(l+r)>>1;
		if(judge(mid))r=mid;
		else l=mid+1;
	}
	printf("%lld\n",l);
	return 0;
}