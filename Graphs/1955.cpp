#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int n, m;
int a[105];
multiset < int > s;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	cin >> m;
	for (int i = 1; i <= m; i++) {
		int x; cin >> x;
		s.insert (x);
	}

	sort (a+1, a+1+n); s.insert (105);
	int res = 0;
	for (int i = 1; i <= n; i++) {
		auto it = s.lower_bound (a[i] - 1);
		if (abs (*it - a[i]) <= 1) res++, s.erase (it);
	}

	printf("%d\n", res);
}
