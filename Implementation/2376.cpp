#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	k = 240 - k;
	k /= 5;
	int ans = 0;
	for (int i = 1; i <= n && k >= i; k -= i, i++, ans++);
	cout << ans;
}
