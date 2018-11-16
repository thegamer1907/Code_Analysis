#include<bits/stdc++.h>

using namespace std;

int n, k, a[50], ans;

int main() {
	cin >> n >> k;
	for (int i = 0;i < n; i++)
			cin >> a[i];
	for (int i = 0;i < n; i++)
		if (a[i] > 0 && a[i] >= a[k-1])
			ans++;
	cout << ans;
	return 0;
}