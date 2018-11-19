#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <string>


namespace {
	using number_t = long long;
}


int main() {
	int h,m,s,t1,t2;
	std::cin >> h >> m >> s >> t1 >> t2;
	h = h % 12;
	h = h * 5;
	t1 = (t1 % 12) * 5;
	t2 = (t2 % 12) * 5;
	int t = t1;
	while (true) {
		if (t == t2) {
			std::cout << "YES" << std::endl;
			return 0;
		}
		if (t == h || t == s || t == m) {
			break;
		}
		++t;
		t = t % 60;
	}
	t = t2;
	while (true) {
		if (t == t1) {
			std::cout << "YES" << std::endl;
			return 0;
		}
		if (t == h || t == s || t == m) {
			break;
		}
		++t;
		t = t % 60;
	}
	std::cout << "NO" << std::endl;
	return 0;
}
