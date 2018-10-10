#include <bits/stdc++.h>
#define in(n, arr) for (int i = 0; i < n; ++i) cin >> arr[i]
#define out(n, arr) for (int i = 0; i < n; ++i) cout << arr[i] << " "
 
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif
	int n;
	long long l;
	cin >> n >> l;
	std::vector<long long> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	double max_diff = 2*(v[0] - 0);
	for (int i = 1; i < n; ++i)
	{
		double diff = v[i] - v[i-1];
		if (max_diff < diff)
			max_diff = diff;
	}
	if (max_diff < 2*(l - v[n-1]))
		max_diff = 2*(l - v[n-1]);
	cout << setprecision(9) << max_diff / 2.0;
	return 0;
}