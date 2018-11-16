#include <bits/stdc++.h>

int main() {
	
	int n = 0, t = 0, s = 1, x = 0;
	std::cin >> n >> t;
	
	for(int i = 1; i < n; ++i) {
		std::cin >> x;
		if(i == s)
			s += x;	
		if(s == t) {
		//	return std::cout << "YES", 0;
		std::cout << "YES";
		return 0;	
		}
	}
	std::cout << "NO";
	
	return 0;
}