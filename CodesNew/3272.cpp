#include <bits/stdc++.h>
using namespace std;

int n;
long long a, M, sum;
int main() {
	scanf ("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> a;
		sum += a;
		M = max(M, a);
	}
	cout << max(sum / (n - 1) + (sum % (n - 1) != 0), M) << endl;
}

              