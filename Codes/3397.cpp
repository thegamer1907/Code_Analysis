#include <bits/stdc++.h>

using namespace std;
long long n;
bool possible(long long k, long long left) {
	long long ret = 0;
	left = n;
	while(true) {
		if (left < k)
			break;
		ret += k;
		left -= k;
		left -= (left / 10);
	}
	ret += left;
	if (n % 2 && ret > n / 2 || n % 2 == 0 && ret >= n / 2)
		return true;
	
	return false;
}

int main() {
	cin >> n;
	long long left = 1;
	long long right = 1e18;
	long long ans;
	while(left <= right) {
		long long mid = (left + right)/ 2;
		if (possible(mid, n)) {
			right = mid - 1;
			ans = mid;
		}
		else left = mid + 1;
	}
	cout << ans << '\n';
	return 0;
}