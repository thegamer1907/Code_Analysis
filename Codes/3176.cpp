#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n; cin >> n;
	long long sol = -1, idx = -1;
	for (int i = 0; i < n; ++i) {
		long long k;
		cin >> k; k -= i;
		long long m = (k+n-1) / n;
		//if (k%n == 0) m = k / n;
		if (sol == -1 || m < sol) sol = m, idx = i;
	}
	cout << idx + 1 << '\n';
	return 0;
}