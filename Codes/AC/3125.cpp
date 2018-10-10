#include <bits/stdc++.h>

using namespace std;
int a[100000];

int main() {
	int time = 1200000000;
	int n;
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
		if (a[i] % n == i) {
			time = min(time, a[i]);
		}
		else {
			if (a[i] <= i) {
				time = min(time, i);
			}
			else if (a[i] % n >= i)
				time = min(time, (a[i] / n + 1) * n  + i);
			else time = min(time, a[i] / n * n + i);
		}
	}

	cout << time % n + 1;


	return 0;
}