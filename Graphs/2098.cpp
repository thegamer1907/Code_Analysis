#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> vec;
	while (m > 1) {
		if (m % 2)
			vec.push_back(m++);
		else
			vec.push_back(m), m /= 2;
	}
	vec.push_back(1);
	int ans = 1e9;
	for (int i = 0; i < (int) vec.size(); i++) {
		if (vec[i] <= n)
			ans = min(ans, n - vec[i] + i);
	}
	cout << ans;
}
