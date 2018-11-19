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
	std::string pass;
	std::cin >> pass;
	int N;
	std::cin >> N;
	std::set<char> first;
	std::set<char> second;
	std::set<std::string> wok;
	for (int n = 0 ; n < N ; ++n) {
		std::string str;
		std::cin >> str;
		first.insert(str[0]);
		second.insert(str[1]);
		wok.insert(str);
	}
	if (wok.count(pass) > 0) {
		std::cout << "YES" << std::endl;
		return 0;
	}
	if (second.count(pass[0]) > 0 && first.count(pass[1]) > 0) {
		std::cout << "YES" << std::endl;
		return 0;
	}
	std::cout << "NO" << std::endl;
	return 0;
}
