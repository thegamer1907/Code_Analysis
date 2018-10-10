#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>
using namespace std;
#define x first
#define y second
#define mp make_pair
#define elif else if

#define int long long

template <class T>
void rd(vector<T> &a) {
	for (int i = 0; i < a.size(); i++)
		cin >> a[i];
	return;
}

void solve() {
	int n, k;
	cin >> n >> k;
	int ans = 0;
	--k;
	while (k % 2 == 1) {
		++ans;
		k /= 2;
	}
	cout << ans + 1;
	return;
}

signed main() {
	ios_base::sync_with_stdio(false);

	solve();

	return 0;
}