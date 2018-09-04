#include <bits/stdc++.h>
#include <ctime>
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")

using namespace std;

#define space ' '
#define enter "\n"
#define fi first
#define se second
#define mp make_pair
#define ALL(x) x.begin(), x.end()

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair <int, int> pii;
typedef set <int> si;
typedef map <int, int> mii;
typedef pair <ll, ll> pll;
typedef vector <int> vi;
typedef vector <pii> vii;
typedef long double ld;

template <class T>
T sqr (T x) {
	return x * x;
}

template <class T>
T gcd (T a, T b) {
	return b ? gcd(b, a % b) : a;
}

template <class T1, class T2>
T1 chmin (T1 & x, const T2 & y) {
	if (T1(y) < x)
		return x = y;
	return x;
}

template <class T1, class T2>
T1 chmax (T1 & x, const T2 & y) {
	if (T1(y) > x)
		return x = y;
	return x;
}

template <class T1, class T2>
ostream & operator << (ostream & os, const pair <T1, T2> & p) {
	return os << '(' << p.fi << ", " << p.se << ')';
}

template <class T>
ostream & operator << (ostream & os, const vector <T> & v) {
	os << '{';
	bool was = false;
	for (const T & x : v) {
		if (was)
			os << ", ";
		was = true;
		os << x;
	}
	os << '}';
	return os;
}

template <class T>
ostream & operator << (ostream & os, const set <T> & v) {
	os << '[';
	bool was = false;
	for (const T & x : v) {
		if (was)
			os << ", ";
		was = true;
		os << x;
	}
	os << ']';
	return os;
}

template <class T>
ostream & operator << (ostream & os, const multiset <T> & v) {
	os << '[';
	bool was = false;
	for (const T & x : v) {
		if (was)
			os << ", ";
		was = true;
		os << x;
	}
	os << ']';
	return os;
}

template <class T1, class T2>
ostream & operator << (ostream & os, const map <T1, T2> & m) {
	os << '<';
	bool was = false;
	for (const auto & x : m) {
		if (was)
			os << ", ";
		was = true;
		os << x;
	}
	os << '>';
	return os;
}

const double EPS = 1e-8;
const int INF = (int) 2e9;
const ll LINF = (ll) 2e18;
const int MOD = (int) 1e9 + 7;
const int MAXN = (int) 1e5 + 10;

int n, S;
int a[MAXN];
ll x[MAXN];
ll ansSum;

int main () {
	ios_base::sync_with_stdio(false);
	cin >> n >> S;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int l = 0, r = n + 1;
	while (r - l > 1) {
		int md = (l + r) >> 1;
		for (int i = 1; i <= n; i++) {
			x[i] = a[i] + 1ll * i * md;
		}
		sort(x + 1, x + n + 1);
		ll sum = 0;
		for (int i = 1; i <= md; i++) {
			sum += x[i];
		}
		if (sum <= S)
			l = md, ansSum = sum;
		else
			r = md;
	}
	cout << l << space << ansSum;
}