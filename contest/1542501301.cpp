#include <iostream>
#include <vector>
#include <algorithm>

main() {
	int n = 0, k = 0;
	std::cin >> n >> k;
	std::vector<int> a(1 << k, 0);
	for(int i = 0; i < n; ++i) {
		int s = 0;
		for(int j = 0, d = 1; j < k; ++j, d *= 2) {
			int q = 0;
			std::cin >> q;
			s += q * d;
		}
//		std::cout << "i = " << i << " s = " << s << "\n";
		++a[s];
	}
	if(a[0] > 0) {
		std::cout << "YES\n";
		return 0;
	}
	for(int i = 0; i < k; ++i) {
		int s = 0;
		for(int j = 1; j < (1 << k); ++j) {
//			std::cout << "j = " << j << " j & (1 << i) = " << (j & (1 << i)) << "\n";
			if((j & (1 << i)) == 0) {
				s += a[j];
			}
		}
//		std::cout << "i = " << i << " s = " << s << "\n";
		if(a[1 << i] > 0 && s > 0) {
			std::cout << "YES\n";
			return 0;			
		}
	}
	std::vector<int> b(1 << k, 0);
	for(int i = 1; i < 1 << k; ++i)
		for(int j = 0; j < k; ++j)
			if(i & (1 << j))
				++b[i];
	for(int i = 1; i < 1 << k; ++i) {
		if(b[i] == 2 && a[i] > 0 && a[(1 << k) - i - 1] > 0) {
			std::cout << "YES\n";
			return 0;
		}
	}
	std::cout << "NO\n";
}