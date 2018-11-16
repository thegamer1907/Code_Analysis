#include <bits/stdc++.h>
#define ll long long
#define sd(x) scanf("%d", &x)
#define slld(x) scanf("%lld", &x)
#define pd(x) printf("%d", x)
#define plld(x) printf("%lld", x)
#define pds(x) printf("%d ", x)
#define pllds(x) printf("%lld ", x)
#define pdn(x) printf("%d\n", x)
#define plldn(x) printf("%lld\n", x)
#define pb push_back`
using namespace std;
const ll upperlimit = 1e6+100;
const int limit=1e4;
const ll mod = 1e9;
ll multiply(ll num1,ll num2,ll mod){
	ll ans = 0;
	num1 %= mod;
	while(num2>0){
		if(num2&1) ans += num1;
		num1 += num1;
		num1 %= mod;
		num2 /= 2;
		ans %= mod;
	}
	return ans;
}
ll powmod2 (ll base,ll exponent, ll mod){
	ll ans = 1;
	base %= mod;
	while(exponent>0){
		if(exponent&1) ans = multiply(ans,base,mod);
		base = multiply(base,base,mod);
		exponent /= 2;
	}
	return ans;
}
ll powmod (ll base,ll exponent, ll mod){
	ll ans = 1;
	base %= mod;
	while(exponent>0){
		if(exponent&1) ans *= base;
		base *= base;
		base %= mod;
		exponent /= 2;
		ans %= mod;
	}
	return ans;
}
ll gcd(ll a,ll b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
char arr[upperlimit];
int main(){
	int n,t;
	sd(n);sd(t);
	scanf("%s",arr);
	while(t--){
		for(int i = n-1; i >= 1; i--){
			if((arr[i]=='G')&&(arr[i-1]=='B')){
				arr[i]='B';
				arr[i-1]='G';
				i--;
			}
		}
	}
	printf("%s\n", arr);
	return 0;
}