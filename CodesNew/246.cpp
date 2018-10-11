#include <algorithm>
#include <iostream>
#include <memory.h>
#include <math.h>
#include <time.h>
#include <string>
#include <vector>
#include <queue>
#include<stack>
#include <map>
#include <set>
#include <list>
using namespace std;
typedef long long ll;
int main() {
	int n, t;
	cin >> n >> t;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
		cin >> v[i];

	ll l = 0, r = 0, sum = v[0], ans = 0;
	while (l < n && r < n) {
		if (l > r) {
			r++;
			sum += v[r];
		}
		if (sum > t) {
			sum -= v[l];
			l++;
		}
		else {
			ans = max(ans, r - l + 1);
			r++;
			if (r < n)
				sum += v[r];
		}
	}
	cout << ans << endl;
	return 0;
}