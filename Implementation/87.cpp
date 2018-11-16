#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i, n) for (int i = 0; i < n; ++i)
#define debug(x) std::cerr << #x << ": " << (x) << '\n';

inline std::size_t getInd(int x, std::vector<int>&a) {
	std::vector<int>::iterator it = std::upper_bound(a.begin(), a.end(), x);
	--x;
	if (it == a.end()) {
		return -1;
	}
	return it - a.begin();
}


int main(void) {
	int n, a, b;
	std::cin >> n >> a >> b;
	std::vector<int>cur;
	FOR(i, n) {
		cur.push_back(i + 1);
	}
	FOR(j, n) {
		std::vector<int> new_cur;
		if (cur.size() == 1) {
			break;
		}
		FOR(i, cur.size()) {
			if (cur[i] == a && cur[i + 1] == b || cur[i] == b && cur[i + 1] == a) {
				if (cur.size() == 2) {
					std::cout << "Final!";
					return 0;
				}
				std::cout << j + 1;
				return 0;
			}
			if (cur[i] == a || cur[i + 1] == a) {
				new_cur.push_back(a);
			}
			else if (cur[i] == b || cur[i + 1] == b) {
				new_cur.push_back(b);
			}
			else {
				new_cur.push_back(-1);
			}
			++i;
		}
		cur = new_cur;
	}
}
