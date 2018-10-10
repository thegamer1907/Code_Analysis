#include <bits/stdc++.h>
using namespace std;
const int N = 1e8;
int ans;
int main() {
	int k;
	cin >> k;
	for (int i=1;;i++) {
		int sum = 0;
		for (int t=i;t;t/=10) sum += t%10;
		if (sum == 10) ans++;
		if (ans == k) {
			cout << i;
			return 0;
		}
	}
	return 0;
}