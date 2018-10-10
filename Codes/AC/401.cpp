#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <string>
#include <cmath>
#include <set>
using namespace std;
typedef long long int ll;
const ll mod = 1e9 + 7;

int main() {
	int k;
	ll i = 19;
	cin >> k;
	vector<ll> start = { 19, 100036, 220033, 1000027, 1120024, 2000008, 2230003, 3311020, 9010000, 10116100, 10800100 };
	i = start[k / 1000];
	if (k > 999) {
		k = k % 1000 + 1;
	}
	for (;; i++) {
		ll t = i;
		int s = 0;
		while (t) {
			s += t % 10;
			t /= 10;
		}
		if (s == 10) k--;
		if (k <= 0) {
			cout << i;
			return 0;
		}
	}
}