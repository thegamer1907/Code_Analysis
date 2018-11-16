#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

main() {
	int n = 0, k = 0;
	std::cin >> n >> k;
	std::string s;
	std::cin >> s;
	std::vector<int> a(n);
	std::vector<int> b(n);
	for(int i = 0, j = 0, p = 0; i < n; ++i) {
		for(; j < n && p <= k; ++j)
			if(s[j] == 'a')
				++p;
		a[i] = (p > k) ? j - 1 : j;
		if(s[i] == 'a')
			--p;
	}
	for(int i = 0, j = 0, p = 0; i < n; ++i) {
		for(; j < n && p <= k; ++j)
			if(s[j] == 'b')
				++p;
		b[i] = (p > k) ? j - 1 : j;
		if(s[i] == 'b')
			--p;
	}
	int res = 0;
	for(int i = 0; i < n; ++i)
		res = std::max({res, a[i] - i, b[i] - i});
	std::cout << res << "\n";
}