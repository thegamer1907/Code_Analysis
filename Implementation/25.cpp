#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <stdio.h>
#include <iomanip>
#include <queue>
#include <unordered_set>
#include <set>
#include <stack>
#include <cmath>
#include <numeric>
#include <fstream>

typedef unsigned int ui;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ldouble;

using namespace std;

const ll LL_INF = 1e18 + 5;
const int INT_INF = 1e9 + 5;
const int MOD_9 = 1e9 + 7;

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}

ll binpow(ll n, ll power) {
	if (power == 0)
		return 1;
	if (power % 2)
		return binpow(n, power - 1) * n;
	ll b = binpow(n, power / 2);
	return b * b;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, a, b, r = 1;
	
	cin >> n >> a >> b;
	
	while (n != 2) {
		if (ceil(a / 2.0) == ceil(b / 2.0))
			cout << r, exit(0);
		a = ceil(a / 2.0);
		b = ceil(b / 2.0);
		n /= 2;
		r++;
	}
	cout << "Final!";
	return 0;
}
