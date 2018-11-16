#include "bits/stdc++.h"
using namespace std;


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int n, ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		ans += (b - a >= 2 ? 1 : 0);
	}

	cout << ans << endl;
	return 0;
}