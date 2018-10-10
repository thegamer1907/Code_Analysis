#include <bits/stdc++.h>

using namespace std;

long long n, m, k;

long long less_than(long long x) {
	long long ans = 0;
	for (long long i = 1; i <= n; i++)
		ans += min((x - 1)/i, m);
	return ans;
}

int main() {
	ios::sync_with_stdio(0);

	cin>>n>>m>>k;
	long long rank = n*m - k + 1;
	long long low = 1, high = n*m + 1;
	while (low < high) {
		long long mid = (low + high)/2;
		if (less_than(mid) < k)
			low = mid + 1;
		else
			high = mid;
	}

	cout<<(low - 1)<<endl;
	return 0;
}