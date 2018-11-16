#include <iostream>
#include <string>
#include <sstream>
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <functional>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <bitset>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, i, j, k, q, ans, x;
	cin >> n;
	vector<int> a(n);
	for (i = 0; i < n; i++) cin >> a[i];
	a.push_back(0);
	a.push_back(1000000100);
	sort(a.begin(), a.end());

	cin >> q;
	while (q--) {
		cin >> x;
		ans = upper_bound(a.begin(), a.end(), x) - a.begin() - 1;
		cout << ans << "\n";
	}

	return 0;
}
