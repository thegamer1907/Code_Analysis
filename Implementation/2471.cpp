#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int mx = 0;
	int k = 0;
	for (int i=0; i<n; i++) {
		int a, b;
		cin >> a >> b;
		k = k-a+b;
		mx = max(mx, k);
	}
	cout << mx << endl;
	return 0;
}