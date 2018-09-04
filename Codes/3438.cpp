#include <bits/stdc++.h>
#define len(x) ((int)(x).size())
#define x first
#define y second
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
typedef long double ld;

bool can(ll n, ll k){
	ll tmp = n, qtd = 0;
	while(tmp > 0){
		ll eat = min(k, tmp);
		tmp -= eat;
		tmp -= tmp/10;
		qtd += eat;
	}
	return (2*qtd >= n);
}

int main(){
	ll n;
	scanf("%lld", &n);
	
	ll l = 1, r = n;
	while(l < r){
		ll mid = (l + r)/2;
		if(can(n, mid)) r = mid;
		else l = mid + 1;
	}
	printf("%lld\n", l);
	return 0;
}
