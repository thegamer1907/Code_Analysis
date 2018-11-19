#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <cmath>
#include <climits>

#include <sstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <utility>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false)

typedef long double ld;
typedef long long ll;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int main()
{
	set<int> problems;
	int N, K;
	cin >> N >> K;
	for (int i = 1; i <= N; ++i) {
		int mask = 0;
		for (int j = 0; j < K; ++j) {
			int x;
			cin >> x;
			mask = (mask << 1) | x;
		}
		problems.insert(mask);
	}

	vector<int> parr(problems.begin(), problems.end());
	for (int i = 1; i < (1 << parr.size()); ++i) {
		int cnt[5] = {0};
		for (int j = 0; j < parr.size(); ++j) {
			if ((i >> j) & 1) {
				for (int k = 0; k < K; ++k) {
					cnt[k] += (parr[j] >> k) & 1;
				}
			}
		}
		int found = 1;
		for (int k = 0; k < K; ++k) {
			if (cnt[k] * 2 > __builtin_popcount(i)) {
				found = 0;
			}
		}
		if (found) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}
