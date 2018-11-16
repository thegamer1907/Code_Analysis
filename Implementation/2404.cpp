#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int n, k;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n>>k;
	int x = 240 - k;
	for (int i = 1; i <= n; i++) {
		if (x - 5 * i >= 0) x -= 5 * i;
		else {
			cout << i - 1;
			return 0;
		}
	}
	cout << n;
	return 0;
}