#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;


long long int a[100010];
vector<long long int> v;

int main () {

	long long int n, s;
	cin >> n >> s;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	long long int k = 0, cost = 0;
	long long int l = 0, r = n;
	while (l < r) {
		v.clear();
		long long int mid = (l + r + 1) / 2;
		for (int i = 1; i <= n; i ++) {
			v.push_back(a[i] + i * mid);
		}
		sort(v.begin(), v.end());
		long long int br = 0;
		for (int i = 0; i < mid; i ++) {
			br += v[i];
		}
		if (br <= s) {
			k = mid;
			cost = br;
			l = mid;
		}
		else {
			r = mid - 1;
		}
	}
	cout << k << " " << cost;

	return 0;
}

