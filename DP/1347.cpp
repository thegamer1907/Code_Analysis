#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <queue>
#include <list>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <stack>

//wasting time

using namespace std;

#define ll long long int
#define pb push_back
#define mk make_pair

unsigned gcd(unsigned u, unsigned v) {
	while (v != 0) {
		unsigned r = u % v;
		u = v;
		v = r;
	}
	return u;
}


const ll maxn = 2e5 + 10;
const ll inf = 1e12 + 10;
const ll maxi = 1e5;

ll arr[maxn];

int main() {
	ll n;
	cin >> n;
	ll totalsum1 = 0;
	for (int j = 1; j <= n; j++) {
		cin >> arr[j];
		if (arr[j] == 1) {
			totalsum1++;
		}
	}
	ll maxim = -1;
	for (int j = 1; j <= n; j++) {
		ll cnt0 = 0, cnt1 = 0;
		for (int i = j; i <= n; i++) {
			if (arr[i] == 1) {
				cnt0++;
			}
			else {
				cnt1++;
			}
			maxim = max(maxim, totalsum1 + cnt1 - cnt0);
		}
	}
	cout << maxim;
	return 0;
}