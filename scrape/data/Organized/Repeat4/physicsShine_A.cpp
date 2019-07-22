#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int* a = new int[n];

	int ok = 1;
	map<int, int> m;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		++m[a[i]];
		ok &= (m[a[i]] < 3);
	}

	int cnt = 0;
	for (auto i : m) 
		if (i.second > 1) ++cnt;
	ok &= (cnt < 2);

	for (auto i : m) 
		if (i.second > 1) {
			ok &= (m.count(i.first - 1) == 0);
			if (i.first == 0) ok = 0;
		}

	if (!ok) cout << "cslnb\n";
	else {
		sort(a, a + n);
		if (n == 1 && a[0] == 0) cout << "cslnb\n";
		else {
			long long sum = 0;
			for (int i = 0; i < n; ++i)
				sum += (a[i] - i);
			if (!(sum % 2)) cout << "cslnb\n";
			else cout << "sjfnb\n";
		}
	}

	delete[] a;
	return 0;
}