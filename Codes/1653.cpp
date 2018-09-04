#include <iostream>
using namespace std;

long long n, m, k;
	
long long count (long long midInp) {
	long long res = 0;
	for (long long i=1; i<=n; i++) {
		long long tmp = midInp / i;
		if (midInp % i == 0) {
			tmp--;
		}
		res += min(tmp, m);
	}
	return res;
}

int main() {
	cin >> n >> m >> k;
	
	long long first = 1, last = n * m, mid, res;
	
	while (first <= last) {
		mid = (first + last) / 2;
		if (count(mid) < k) {
			res = mid;
			first = mid + 1;
		}
		else last = mid - 1;
	}
	cout << res;
	return 0;
}