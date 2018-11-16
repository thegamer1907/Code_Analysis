#include <bits/stdc++.h>
#define ull unsigned long long
#define PB push_back
#define MOD 1000000007
using namespace std;


bool solve(int t, int size, int * & a) {
	a[size-1] = 1;
	for (int i = 1; i <= size; i += a[i]) {
		if (i == t) return true;
		else if (i > t) {
			return false;
		}
	}

	return false;
}

int main() {
	ios::sync_with_stdio(false);
	int n, t; cin >> n >> t;
	int * a = new int[n + 1];

	for (int i = 1 ; i < n; i++) {
		cin >> a[i];
	}
	
	cout << ((solve(t, n + 1, a)) ? "YES" : "NO") << endl;

	delete [] a;
	return 0;
}
