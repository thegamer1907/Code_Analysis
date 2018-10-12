// in the name of Allah

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define pb push_back
#define ld long double
#define sz(x) ((int) (x.size()))

#define max_n 5123456
#define mod 1000000007
// #define mod 998244353
#define myPrime 97654321

// #define fr first
// #define se second

using namespace std;

ll add(ll a, ll b) {
	a += b;
	if(a >= mod) return a - mod;
	return a;
}

ll mul(ll a, ll b) {
	a *= b;
	if(a >= mod) return a % mod;
	return a;
}

ll power(ll x, ll y) {
	if(y == 0) return 1;
	ll foo = power(x, y/2);
	foo = mul(foo, foo);
	if(y&1) return mul(x, foo);
	return foo;
}

ll a[12345678];
ll cnt[12345678];
bool seen[12345678];

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n, x;
	cin >> n;
	memset(cnt, 0, sizeof cnt);
	while(n--) {
		cin >> x;
		cnt[x]++;
	}
	memset(seen, 0, sizeof seen);
	for(int j=2; j<=10000000; j+=2) a[2] += cnt[j];
	for(int i=3; i<=10000000; i+=2) {
		if(seen[i] == 0) {
			for(int j=i; j<=10000000; j+=i) {
				seen[j] = 1;
				a[i] += cnt[j];
			}
		}
	}
	for(int i=0; i<=10000000; i++) a[i] += a[i-1];
	ll m, l, r;
	cin >> m;
	while(m--) {
		cin >> l >> r;
		if(l > 10000000) {
			cout << 0 << endl;
			continue;
		}
		if(r > 10000000) r = 10000000;
		cout << a[r] - a[l-1] << endl;
	}
	return 0;
}