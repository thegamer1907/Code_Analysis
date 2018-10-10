#include <bits/stdc++.h>
//#include "util.h"

using namespace std;

#define sz(x) (int)(x).size()
#define F first
#define S second
#define mpa make_pair
#define pb emplace_back

typedef int int32;
typedef long long int64;
typedef pair<int, int> pii;

template<typename c> void smax(c &x, c y) { x = max(x, y); }
template<typename c> void smin(c &x, c y) { x = min(x, y); }

const int maxn = 1e6 + 11;
const int base = 31;
const int mod = 1e9 + 7;
int64 pw[maxn], h[maxn], inv[maxn], n;
string s;

bool check(int len) {
	for (int i = 1; i+len < n; i++) {
		int hsh = h[i+len-1] - h[i-1];
		while (hsh<0)
			hsh += mod;
		hsh %= mod;
		if (hsh * inv[i] % mod == h[len-1])
			return true;
	}
	return false;
}

int64 pwmod(int64 a, int64 b) {
	int64 ret = 1;
	for (; b; b >>= 1, a = a*a % mod) {
		if (b&1)
			ret = ret * a % mod;
	}
	return ret;
}

int32_t main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> s;
	n = sz(s);
	pw[0] = 1;
	for (int i = 0; i < n; i++) {
		if (i>0) h[i] = h[i-1], pw[i] = base * pw[i-1] % mod;
		inv[i] = pwmod(pw[i], mod-2);
		h[i] += (s[i]-'a'+1) * pw[i] % mod;
		h[i] %= mod;
	}
	int lo = 0, hi = n, mid;
	while (hi-lo > 1) {
		mid = hi + lo >> 1;
		if (check(mid))
			lo = mid;
		else
			hi = mid;
	}

	for (int i = lo; i>=1; i--) {
		if (((((h[n-1]-h[n-i-1])%mod)+mod)%mod) * inv[n-i] % mod == h[i-1])
			return cout << s.substr(0, i) << endl, 0;
	}
	cout << "Just a legend\n";
}
