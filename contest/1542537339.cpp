#include <bits/stdc++.h>

typedef std::pair<int, int> ii;
#define int int64_t

const int kInfty = 1e18;
const double kEps = 1e-7;

int32_t main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
//   freopen("task.inp", "r", stdin);

  int cnt[16] = {0};
  int n, k;
  std::cin >> n >> k;
  for (int i = 0; i < n; ++i) {
  	int state = 0;
  	for (int j = 0; j < k; ++j) {
  		int t; std::cin >> t;
  		state = (state << 1) | t;
  	}
  	if (state == 0) {
  		puts("YES");
  		return 0;
  	}
  	++cnt[state];
  }

  for (int i = 0; i < (1 << k); ++i)
  	for (int j = 0; j < (1 << k); ++j) {
  		if (i & j) continue;
  		if (cnt[i] && cnt[j]) {
  			puts("YES");
  			return 0;
  		}
  	}
  puts("NO");
}