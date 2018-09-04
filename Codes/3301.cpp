#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i =0;  i < n; ++i) {
		cin >> a[i];
	}
	int it = min_element(a, a + n) - a;
	int z = a[it];
	cerr << "z = " << z << "\n";
	for (int i = 0; i < n; ++i) {
		a[i] -= z; 
	}
	int s = z % n;
	cerr << "s = " << s << "\n";
	int p = 0;
	for (int i = s; i < s + n; ++i, ++p) {

		cerr << a[i] << " " << p << "\n";
		if (a[i % n] - p <= 0) {
			++p;
			cout << i % n + 1;
			return 0;
			break;
		}
	}	
	cout << z + p;
}
