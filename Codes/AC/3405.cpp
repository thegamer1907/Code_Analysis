#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include <cstdio>
#include <map>
#include <cmath>
using namespace std;

long long n;

bool ok(long long k) {
	long long remain = n;
	long long ves = 0;

	while (remain) {
		if (remain >= k) {
			remain -= k;
			ves += k;
		}
		else {
			ves += remain;
			remain = 0;
		}
			
		long long pet = remain / 10;
		remain -= pet;
	}

	if (ves + ves >= n)
		return 1;
	else
		return 0;

}

long long solve() {
	long long l = 1, r = n;
	long long mid;
	while (l <= r) {
		//cout << "l=" << l << " r=" << r << endl;
		mid = (l + r) >> 1;
		if (ok(mid)) {
			r = mid - 1;
		}
		else
			l = mid + 1;
	}

	return l;
}

int main() {
	while (cin >> n) {
		cout << solve()<<endl;
	}
}