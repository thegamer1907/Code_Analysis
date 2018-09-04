#include<bits/stdc++.h>

using LL = long long;

LL num[300300], left[300300], right[300300];

int main()
{
	int n;
	while(std::cin >> n) {
		memset(left, 0, sizeof(left));
		for(int i = 1; i <= n; i++) {
			std::cin >> num[i];
		}

		std::map<LL, int> mp;
		for(int i = 1; i <= n; i++) {
			left[i] = left[i-1] + num[i];
		}

		for(int i = n; i >= 1; i--) {
			right[i] = right[i+1] + num[i];
			if(mp.find(right[i]) == mp.end()) {
				mp[right[i]] = i;
			}
		}

		LL ans = 0;
		for(int i = 1; i < n; i++) {
			auto it = mp.find(left[i]);
			if(it == mp.end()) {
				continue;
			}

			if(i < it->second) {
				ans = std::max(ans, left[i]);
			}
		}

		std::cout << ans << std::endl;
	}
	return 0;
}
