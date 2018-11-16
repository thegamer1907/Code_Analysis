#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv) {
	int n, k;
	scanf("%d%d", &n, &k);
	vector<int> a(n), b(k);
	for (int i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	for (int i = 0; i < k; ++i)
		scanf("%d", &b[i]);
	sort(b.begin(), b.end());
	for (int i = 0; i < n; ++i)
		if (a[i] == 0) {
			a[i] = b.back();
			b.pop_back();
		}
	bool ok = true;
	for (int i = 1; i < n; ++i)
		ok &= a[i] > a[i - 1];
	if (ok)
		puts("No");
	else
		puts("Yes");
	return 0;
}
