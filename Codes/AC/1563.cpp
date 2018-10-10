#include<bits/stdc++.h>
#include<ext/numeric>

using namespace std;
using namespace __gnu_cxx;

const int MAX = 1e5 + 5;
int n, s, a[MAX];
long long b[MAX], out;

bool check(int k) {
	for (int i = 0; i < n; ++i)
		b[i] = a[i] + (i + 1) * 1ll * k;
	sort(b, b + n);
	long long sum = 0;
	for (int i = 0; i < k; ++i)
		sum += b[i];
	out = sum;
	return sum <= s;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	cin >> n >> s;
	for (int i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	int l = 0, r = n;
	while (l < r) {
		int mid = (l + r + 1) / 2;
		if (check(mid))
			l = mid;
		else
			r = mid - 1;
	}
	check(l);
	cout << l << ' ' << out << endl;
}
