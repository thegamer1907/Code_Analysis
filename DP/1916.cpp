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

	int n, m, i, j, k, x;
	cin >> n >> m;
	vector<int> a(n + 1), ans(n + 1);
	set<int> s;
	for (i = 1; i <= n; i++) cin >> a[i];
	for (i = n; i >= 1; i--) {
		s.insert(a[i]);
		ans[i] = s.size();
	}

	while (m--) {
		cin >> x;
		cout << ans[x] << "\n";
	}

	return 0;
}
