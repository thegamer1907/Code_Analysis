#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <set>
#include <cstdio>
#include <cctype>
#include <queue>
#include <bitset>
#include <unordered_map>
#include <functional>
using namespace std;

typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#else
#endif
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	ll sumx = 0;
	ll sumy = 0;
	ll sumz = 0;
	ll n;
	cin >> n;
	for (ll i = 0; i < n; ++i) {
		ll x, y, z;
		cin >> x >> y >> z;
		sumx += x;
		sumy += y;
		sumz += z;
	}
	if (sumx == 0 && sumy == 0 && sumz == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}