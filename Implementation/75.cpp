#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int pow2(int n) {
	int res = 0;
	while (n) res++, n /= 2;
	return res - 1;
}
int find(int n, int a, int b) {
	int k = n / 2;
	if (a > b) swap(a, b);
	if (a <= k && b > k) return pow2(n);
	if (a > k && b > k) return find(n / 2, a - k, b - k);
	return find(n / 2, a, b);
}
int main() {
	ios_base::sync_with_stdio(0);
	int n, a, b;
	cin >> n >> a >> b;
	int ans = find(n, a, b);
	if (ans == pow2(n)) cout << "Final!";
	else cout << ans;
}