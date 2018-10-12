#include <bits/stdc++.h>
using namespace std;

int a[110000];

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int n; cin >> n;
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	long long st = 0, en = 1e13;
	for (int times = 0; times < 100; times++) {
		long long mid = (st + en) / 2;
		bool flg = 0;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] > mid) flg = 1;
			sum += (mid - a[i]);
		}
		if (flg == 0 && sum >= mid) en = mid;
		else st = mid;
	}
	cout << en << endl;
	return 0;
}
 
   