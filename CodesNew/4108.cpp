#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, q;
	cin >> n >> q;
	vector<int> a(n+1, 0);
	for (int i = 0; i < n; i += 1) cin >> a[i];
	vector<long long> s(n, 0);
	for (int i = 0; i < n; i += 1) {
		if (i != 0) s[i] += s[i-1];
		s[i] += a[i];
	}

    int cur = 0, remain = a[0];
	for (int i = 0; i < q; i += 1) {
		long long k;
		cin >> k;
		if (k < remain) remain -= k;
		else {
			k -= remain;
			remain = 0;
			if (s[cur] + k >= s[n-1]) cur = n;
			else {
				int p = upper_bound(s.begin() + cur+1, s.end(), s[cur] + k) - s.begin();
				k -= (s[p-1] - s[cur]);
				cur = p;
				remain = a[p] - k;
			}
		}
		if (cur == n) cur = 0, remain = a[0];
		cout << n - cur << endl;
	}
}
