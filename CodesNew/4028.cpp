#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;


class Solution {
public:
	vector<int> query(vector<int>& ws, vector<long long>& as) {
		int n = ws.size();
		int m = as.size();

		vector<int> res;
		res.reserve(m);

		vector<long long> presums(n + 1, 0);

		for (int i = 0; i < n; ++i) {
			presums[i + 1] = presums[i] + ws[i]; 
		}

		long long asum = 0;
		for (int i = 0; i < m; ++i) {
			asum += as[i];

			auto it = upper_bound(presums.begin(), presums.end(), asum);
			if (it == presums.end()) {
				asum = 0;
				res.push_back(n);
			} else {
				int cnt = presums.end() - it;
				res.push_back(cnt);
			}
		}

		return res;
	}
};


int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, q;
	cin >> n >> q;
	vector<int> ws(n);
	vector<long long> as(q);

	for (int i = 0; i < n; ++i) {
		cin >> ws[i];
	}
	for (int i = 0; i < q; ++i) {
		cin >> as[i];
	}

	Solution sol;

	auto res = sol.query(ws, as);

	for (auto r : res) {
		cout << r << endl;
	}

	return 0;
}