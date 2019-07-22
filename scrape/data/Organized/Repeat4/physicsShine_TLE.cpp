#include <iostream>
#include <algorithm>
using namespace std;

bool check(int* a, int n, int i) {
	int* b = new int[n];
	for (int j = 0; j < n; ++j)
		b[j] = a[j];
	--b[i];
	sort(b, b + n);
	for (int j = 0; j < n - 1; ++j) {
		if (b[j] == b[j + 1]) {
			delete[] b;
			return false;
		}
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int* a = new int[n];

	long long sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		sum += a[i];
	}

	bool u = false;
	for (int i = 0; i < n; ++i) {
		if (a[i] && check(a, n, i)) {
			u = true;
			break;
		}
	}
	if (!u) cout << "cslnb\n";
	else if (sum % 2) cout << "cslnb\n";
	else cout << "sjfnb\n";

	delete[] a;

	return 0;
}