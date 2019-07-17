#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
#pragma comment(linker, "/STACK:256000000")

#include <bits/stdc++.h>
//*/

#define DBG 1

using namespace std;
static const int _ = []() {
	ios::sync_with_stdio(false);
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	return 0;
}();

// I hate typing .first or .second
template<typename T, typename U>
struct par {
	T x;
	U y;
	par() :x(0), y(0) {}
	par(const T& x, const U& y) :x(x), y(y) {}
	bool operator<(const par& other) const {
		if (x == other.x) return y < other.y;
		return x < other.x;
	}
	bool operator>(const par& other) const {
		if (x == other.x) return y > other.y;
		return x > other.x;
	}
	bool operator==(const par& other) const {
		return x == other.x && y == other.y;
	}
	bool operator!=(const par& other) const {
		return x != other.x || y != other.y;
	}
	par operator-(const par& b) const {
		return { x - b.x, y - b.y };
	}
	string str() {
		ostringstream ss;
		ss << "{" << x << "," << y << "}";
		return ss.str();
	}
};

#define ll long long
#define ull unsigned long long
#define rep(i,a) for(ll i=0;i<(a);i++)
#define rp1(i,a) for(ll i=1;i<=(a);i++)
#define rng(i,a,b) for(ll i=(a);i<=(b);i++)
#define rev(i,a) for(ll i=(a)-1;i>=0;i--)
#define all(a) (a).begin(),(a).end()
#define any(i,a) for(auto& i:a)
#define pll par<ll,ll>
#define pii par<int,int>
#define X first
#define Y second
#define V vector
#define VL V<ll>
#define VVL V<VL>
#define VS V<string>

template<class T> inline vector<T> rv(ll n) { vector<T> v(n); rep(i, n) cin >> v[i]; return v; }
template<class T> inline void pv(const vector<T>& v) { rep(i, v.size()) cout << v[i] << " "; cout << endl; }
template<class T, class U> inline void amax(T& a, const U& b) { if (a < b) a = b; }
template<class T, class U> inline void amin(T& a, const U& b) { if (a > b) a = b; }
template<class T, class U> inline T min(T& a, const U& b) { return a > b ? b : a; }
template<class T, class U> inline T max(T& a, const U& b) { return a < b ? b : a; }

const ll MOD = 1e9 + 7;
const ll MOD1 = 998244353;
struct custom_hash {
	static uint64_t splitmix64(uint64_t x) {
		// http://xorshift.di.unimi.it/splitmix64.c
		x += 0x9e3779b97f4a7c15;
		x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
		x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
		return x ^ (x >> 31);
	}

	size_t operator()(uint64_t x) const {
		static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
		return splitmix64(x + FIXED_RANDOM);
	}
};

ll GCD(ll a, ll b) {
	if (a < b) swap(a, b);
	while (b) {
		ll r = a % b;
		a = b;
		b = r;
	}
	return a;
}


void solve() {
	ll n, m, k;
	cin >> n >> m >> k;
	set<ll> s;
	vector<ll> p(m); rep(i, m) cin >> p[i], s.insert(p[i]);
	ll page = 0, ops = 0, z = 0;
	rp1(i, n) {
		page++;
		if (s.count(i)) z++;
		if (page == k) {
			if (z) ops++;
			page -= z;
			page %= k;
			z = 0;
		}
	}
	cout << ops + (z ? 1 : 0) << endl;
}


int main() {
	ll n, m, k;
	cin >> n >> m >> k;
	set<ll> s;
	vector<ll> p(m); rep(i, m) cin >> p[i], s.insert(p[i]);
	ll page = 0, ops = 0, z = 0;

	ll j = 0, off = 0;
	while (j < m) {
		ll start = (p[j] - off), end = (p[j] - off) + ((k - ((p[j] - off) % k)) % k);
		while (j < m && (p[j]-off) <= end) z++, j++;
		ops++;
		off += z;
		z = 0;
	}
	cout << ops/*+(z?1:0)*/ << endl;
	return 0;
}