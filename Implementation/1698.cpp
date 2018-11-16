#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <utility>
#include <set>
#include <numeric>  
#include <cmath>
#include <queue>
#include <functional>
#include <iomanip>


#define pb push_back
#define eb emplace_back
#define ll long long
#define rep(i,b,e) for(int i=(b);i<(e);i++)
#define ALL(v) v.begin(),v.end()
#define read(a, b) rep(i, 0, b) { int t; cin >> t;a.pb(t); }
using namespace std;
using std::cin;


typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vii;
typedef vector<vl> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

ifstream in;
ofstream out;
ostringstream oss;
std::streambuf *coutbuf;


#define code_force
int stage = 2;
string problem = "B";
ll solve() {
	return 1;
}


ll mod_pow(ll x, ll n, ll mod) {
	ll res = 1;
	while (n > 0) {
		if (n & 1) {
			res = res * x;
			res %= mod;
		}
		x = (x*x) % mod;
		n >>= 1;
	}
	return res;
}

int gcd(int a, int b) {
	while (b > 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int stein_gcd(int a, int b) {
	unsigned c = 0;
	while (1)
	{
		if (a == 0)
			return b << c;
		else if (b == 0)
			return a << c;
		if (!(a & 1) && !(b & 1))
		{
			a >>= 1; b >>= 1; ++c;
		}
		else if (!(a & 1) && (b & 1))
		{
			a >>= 1;
		}
		else if ((a & 1) && !(b & 1))
		{
			b >>= 1;
		}
		else if ((a & 1) && (b & 1))
		{
			unsigned tmp = a > b ? b : a;
			a = a > b ? a - b : (b - a);
			b = tmp;
		}
	}
}

tuple<int, int, int> xgcd(int a, int b) {
	int x = 0, y = 1, px = 1, py = 0;
	while (b != 0) {
		int q = a / b;
		int tx = x;
		x = px - q * x;
		px = tx;
		int ty = y;
		y = py - q * y;
		py = ty;
		int r = a % b;
		a = b;
		b = r;
	}

	return make_tuple(a, px, py);
}

// two pointers 

int snake_find(int limit, vector<int> a) {
	int n = a.size();
	int t = 0, s = 0, sum = 0;
	int res = n + 1;
	while (1) {
		while (t < n && sum < limit) {
			sum += a[t++];
		}
		// not satisfied
		if (sum < limit) {
			break;
		}
		res = min(res, t - s + 1);
		// remove first element;
		sum -= a[s++];
	}

	return res;
}






void goforit() {
	string s; cin >> s; s += 'x';
	char cur = 'x';
	int num = 0;
	bool ok = 1;
	for (char c : s) {
		if (c == cur) {
			num++;
		}
		else {
			if (num >= 7) {
				ok = 0;
				break;
			}
			cur = c;
			num = 1;
		}
	}

	if (!ok) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}


	return;
}

int rd() {
	int x = 0, f = 1; char c = getchar();
	while (c<'0' || c>'9') { if (c == '-')f = -1; c = getchar(); }
	while (c >= '0'&&c <= '9') { x = x * 10 + c - '0'; c = getchar(); }
	return x * f;
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
#ifdef code_jam 
	if (stage == 1) {
		in.open(problem + "-small-practice.in"); cin.rdbuf(in.rdbuf());
		out.open(problem + "-small-practice.out"); cout.rdbuf(out.rdbuf());
	}
	else if (stage == 2) {
		in.open(problem + "-large-practice.in"); cin.rdbuf(in.rdbuf());
		out.open(problem + "-large-practice.out"); cout.rdbuf(out.rdbuf());
	}
	else {
		coutbuf = cout.rdbuf(oss.rdbuf());
	}
	int t; cin >> t;
	for (int i = 1; i <= t; i++) {
		cout << "Case #" << i << ": " << solve() << "\n";
	}
	if (stage == 0) {
		std::cout.rdbuf(coutbuf);
		cout << oss.str();
	}

#endif

	goforit();

	return 0;
}





