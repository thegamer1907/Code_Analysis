#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
  IO;
	int n; cin >> n;
	vector <int> a(n);
	vector <int> sum(n + 1);
	for (int i = 0; i < n; ++i) cin >> a[i];

	for (int i = 0; i < n; ++i)
			sum[i + 1] = sum[i] + a[i];

	int res = 0;
	for (int l = 1; l <= n; ++l)
	for (int r = l; r <= n; ++r)
		res = max(res, (r - l + 1 - (sum[r] - sum[l - 1])) + sum[l - 1] + sum[n] - sum[r]);
	cout << res << endl;

  return 0;
}
