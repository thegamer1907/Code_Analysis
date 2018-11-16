#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <iomanip>
#include <cmath>

#define elif else if

using namespace std;
typedef long long ll;
typedef long double ld;

const ll inf = 1e18 + 3, mod = 1e9 + 7;

istream& operator>>(istream& is, vector<ll> &a) {
	for (int i = 0; i < a.size(); ++i) cin >> a[i];
	return is;
}

ostream& operator<<(ostream& os, vector<ll> &a) {
	for (int i = 0; i < a.size(); ++i) cout << a[i] << ' ';
	return os;
}

void sort(vector<ll> &a) {
	sort(a.begin(), a.end());
}

ll step(ll a, ll n) {
	if (n == 1) return a % mod;
	if (n & 1) return (step(a, n - 1) * a) % mod;
	ll k = step(a, n / 2);
	return (k * k) % mod;
}

ll gcd(ll a, ll b) {
	return a > 0 ? gcd(b % a, a) : b;
}

ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}

int main() {
	ll n, a, b;
	cin >> n >> a >> b;
	if (a > b) swap(a, b);
	ll ans = 0;
	while (n > 2) {
		if ((a & 1) && a + 1 == b) break;
		n /= 2;
		ans += 1;
		a = (a + 1) / 2;
		b = (b + 1) / 2;
	}
	if (n == 2) cout << "Final!";
	else cout << ans + 1;
	return 0;
}