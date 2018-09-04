#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pcc pair<char,char>
#define vi vector <int>
#define vl vector <ll>
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define pd(x) printf("%d",x)
#define plld(x) printf("%lld",x)
#define pds(x) printf("%d ",x)
#define pllds(x) printf("%lld ",x)
#define pdn(x) printf("%d\n",x)
#define plldn(x) printf("%lld\n",x)
#define INF 2e9
#define INFLL 4e18
#define spn setprecision
#define fr(x,a,b,c) for(int x = a; x <= b; x+=c)
using namespace std;
ll multiply(ll num1, ll num2, ll mod) { // with mod > 1e9
	ll ans = 0;
	num1 %= mod;
	num2 %= mod;
	while (num2) {
		if (num2&1) {
			ans += num1;
			ans %= mod;
		}
		num1 *= 2;
		num1 %= mod;
		num2 /= 2;
	}
	return ans;
}
ll powmod2(ll base,ll exponent,ll mod){ // with mod > 1e9
	ll ans = 1;
	while (exponent) {
		if (exponent&1) {
			ans = multiply(ans, base, mod);
		}
		base = multiply(base, base, mod);
		exponent /= 2;
	}
	return ans;
}
ll powmod(ll base,ll exponent,ll mod){ // with mod < 1e9
	ll ans=1;
	while(exponent){
		if(exponent&1)ans=(ans*base)%mod;
		base=(base*base)%mod;
		exponent/=2;
	}
	return ans;
}
ll gcd(ll a, ll b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
const int upperlimit = 1e6;
const int mod = 1e9+7;
int main() {
	int n,m;
	ll k,l,r;
	sd(n);
	sd(m);
	slld(k);
	l=0;
	r=m;
	r*=n;
	while(r-l>1){
		ll temp=0;
		ll mid=(l+r)/2;
		for(int i = 1; i <= n; i++){
			ll t=mid;
			t/=i;
			if(t>m){
				t=m;
			}
			temp+=t;
		}
		if(temp>=k){
			r=mid;
		}
		else{
			l=mid;
		}
	}
	plld(r);
	return 0;
}