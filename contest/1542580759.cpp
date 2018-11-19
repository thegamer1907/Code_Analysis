#include <stdio.h>
#include <iostream>
#include <vector>
#include <assert.h>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <memory.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
typedef long long ll;
int n;
char dp[200][1024][11][4];
pair<int, int> g[200];
string s[100];
bool can[100][11][1024];
bool calc(int i, int mask, int len, int s) {
	if (len == 0)
		return true;
	char &ret = dp[i][mask][len][s];
	if (ret != -1)
		return ret;
	ret = false;
	if (s == 1 && i < n)
		return ret = can[i][len][mask];
	if (s == 0 && i < n) {
		if (::s[i].size() < len)
			return ret;
		int cur = 0;
		for (int j = 0; j < len; ++j)
			cur = (cur << 1) | (::s[i][j] - '0');
		return ret = cur == mask;
	}
	if (s == 2 && i < n) {
		if (::s[i].size() < len)
			return ret;
		int cur = 0;
		for (int j = ::s[i].size() - len; j < ::s[i].size(); ++j)
			cur = (cur << 1) | (::s[i][j] - '0');
		return ret = cur == mask;
	}
	if (s == 3 && i < n) {
		if (::s[i].size() != len)
			return ret;
		int cur = 0;
		for (int j = 0; j<::s[i].size(); ++j)
			cur = (cur << 1) | (::s[i][j] - '0');
		return ret = cur == mask;
	}
	if (s == 3) {
		for (int left = 1; left < len; ++left)
			if (calc(g[i].first, mask >> (len - left), left, 3) && calc(g[i].second, mask & ((1 << (len - left)) - 1), len - left, 3))
				return ret = true;
		return ret;
	}
	if (s != 2 && calc(g[i].first, mask, len, s))
		return ret = true;
	if (s != 0 && calc(g[i].second, mask, len, s))
		return ret = true;
	for (int left = 1; left < len; ++left) {
		bool cur = false;
		if (s == 0)
			cur = calc(g[i].first, mask >> (len - left), left, 3) && calc(g[i].second, mask & ((1 << (len - left)) - 1), len - left, 0);
		if (s == 1)
			cur = calc(g[i].first, mask >> (len - left), left, 2) && calc(g[i].second, mask & ((1 << (len - left)) - 1), len - left, 0);
		if (s == 2)
			cur = calc(g[i].first, mask >> (len - left), left, 2) && calc(g[i].second, mask & ((1 << (len - left)) - 1), len - left, 3);
		if (cur)
			return ret = true;
	}
	return ret;
}
int main()
{
	scanf("%d", &n);
	memset(g, -1, sizeof(g));
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
		for (int len = 1; len <= 10; ++len)
			for (int mask = 0; mask < (1 << len); ++mask) {
				for (int j = 0; j + len <= s[i].size(); ++j) {
					int cur = 0;
					for (int k = 0; k < len; ++k)
						cur = (cur << 1) | (s[i][j + k] - '0');
					if (mask == cur)
						can[i][len][mask] = true;
				}
			}
	}
	memset(dp, -1, sizeof(dp));
	int m;
	scanf("%d", &m);
	for (int i = n; i <n + m; ++i) {
		scanf("%d%d", &g[i].first, &g[i].second);
		--g[i].first; --g[i].second;
		int res = 0;
		for (int k = 10; k > 0; --k) {
			bool ok = true;
			for (int mask = 0; mask < (1 << k); ++mask)
				if (!calc(i, mask, k, 1)) {
					ok = false;
					break;
				}
			if (ok) {
				res = k;
				break;
			}
		}
		printf("%d\n", res);
	}
	return 0;
}