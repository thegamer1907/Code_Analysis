#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	k--;
	vector<int> A(n);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	int p = 0;
	while (p <= k-1) {
		p += A[p];
	}
	if (p == k) cout << "YES" << endl;
	else cout << "NO" << endl;
}
