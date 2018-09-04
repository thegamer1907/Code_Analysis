#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, l;
	cin >> n >> l;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
		cin >> v[i];
	sort(v.begin(), v.end());
	double res = max(v.front()-0, l-v.back());
	for (int i = 1; i < n; ++i)
		res = max(res, (v[i]-v[i-1])/2.);
	printf("%.8f\n", res);
	return 0;
}