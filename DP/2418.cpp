#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
  IO;
	int n, k; cin >> n >> k;
	vector <int> a(n);
	for (int i = 0; i < n; ++i) cin >> a[i];

	int sum = 0;
	for (int i = 0; i < k; ++i) sum += a[i];

	int res = sum, ans = 1;
	for (int i = k; i < n; ++i) {
		sum += a[i];
		sum -= a[i - k];
		if (sum < res) {
			res = sum;
			ans = i - k + 1 + 1;
		}
	}
	cout << ans << endl;

  return 0;
}
