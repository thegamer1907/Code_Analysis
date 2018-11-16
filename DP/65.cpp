#include <iostream>
#include <vector>
#include <algorithm>

main() {
	int n = 0, m = 0;
	std::cin >> n;
	std::vector<int> a(n);
	for(int i = 0; i < n; ++i)
		std::cin >> a[i];
	std::cin >> m;
	std::vector<int> b(m);
	for(int i = 0; i < m; ++i)
		std::cin >> b[i];
	std::sort(a.begin(), a.end());
	std::sort(b.begin(), b.end());
	int res = 0;
	for(int i = 0, j = 0; i < n && j < m; ) {
		if(std::abs(a[i] - b[j]) < 2) {
			++res, ++i, ++j;
		} else {
			if(a[i] < b[j])
				++i;
			else 
				++j;
		}
	}
	std::cout << res << "\n";
}