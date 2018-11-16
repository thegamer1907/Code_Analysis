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

int digitsum(int key) {
	int ans = 0;
	while (key > 0) {
		ans += key % 10;
		key /= 10;
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, i, j, k;
	vector<int> ans;

	cin >> n; 
	for (i = 1; ans.size() < n; i++) {
		if (digitsum(i) == 10) ans.push_back(i);
	}

	cout << ans[n - 1] << "\n";


	return 0;
}
