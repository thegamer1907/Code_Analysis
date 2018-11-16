#include <bits/stdc++.h>

std::vector<int> ans;

void init() {
	for (int i = 10; i <= 20000000; i ++) {
		int x = i, digit = 0;
		while (x) {
			digit += x % 10;
			x /= 10;
		}
		if (digit == 10) {
			ans.push_back(i);
		}
	}
}

int main() {
	init();
	int k;
	std::cin >> k;
	std::cout << ans[k - 1] << '\n';
	return 0;
}
