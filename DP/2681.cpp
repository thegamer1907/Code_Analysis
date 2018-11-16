//#define __USE_MINGW_ANSI_STDIO 0
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define debug3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n";

#define boost ios::sync_with_stdio(0); cin.tie(0)

#define fi first
#define se second

typedef long long ll;
typedef double ld;
typedef pair<int, int> pii;

const int N = 1e5 + 5;
const int MOD = 1e9 + 7;

/***************************************************************************/

ll power(ll a, ll n, ll m) {
	if(n == 0) return 1;
	ll p = power(a, n>>1, m);
	p = (p * p) % m;
	if(n & 1) p = (p * a) % m;
	return p;
}

ll fact[N], ifact[N];

void calculateFact() {

	fact[0] = 1;

	for(int i=1; i<N; i++) {
		fact[i] = (i * fact[i-1]) % MOD;
	}
	ifact[N-1] = power(fact[N-1], MOD-2, MOD);

	for(int i=N-1; i>=1; i--) {
		ifact[i-1] = (i * ifact[i]) % MOD;
	}
}

ll nck(int n, int k) {
	
	if(n < k || k < 0) return 0;

	ll ans = fact[n];
	ans = (ans * ifact[k]) % MOD;
	ans = (ans * ifact[n-k]) % MOD;

	return ans;
}

int main() {

	boost;
	calculateFact();

	string a, b; cin>>a>>b;
	int k = 0, s = 0;
	for(auto it : a) {
		if(it == '+') k++;
		else k--;
	}
	for(auto it : b) {
		if(it == '+') k--;
		else if(it == '-') k++;
		else s++;
	}
	ld num, dum = 1<<s;

	if(s+k < 0 || ((s+k) & 1)) {
		num = 0;
	}
	else {
		int p = (s+k)/2;
		num = nck(s, p);
	}

	cout<<setprecision(15)<<fixed<<num/dum<<"\n";
	return 0;
}