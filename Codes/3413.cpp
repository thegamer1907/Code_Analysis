#include <iostream>
#include <vector>
#include <cassert>
#include <queue>
#include <map>
#include <algorithm>
#include <string>
#include <set>
#define INF (1LL<<61)
#define MAXVAL 200010
#define MOD 1000000007
#define IMOD 500000004
using namespace std;

bool check(long long n, long long x) {
	long long p = 0,nt = n;
	while (n > 0) {
		p += min(x,n);
		n -= x;
		if (n < 0) break;
		long long v = n / 10;
		if (v == 0) {
			p += n;
			break;
		}
		n -= v;
	}
	return 2 * p >= nt;
}
int main() {
	long long n; cin >> n;

	long long lo = 1, hi = n;
	while (lo < hi) {
		long long mid = (lo + hi) >> 1;
		if (check(n, mid)) hi = mid;
		else lo = mid + 1;
	}
	cout << hi << endl;
}