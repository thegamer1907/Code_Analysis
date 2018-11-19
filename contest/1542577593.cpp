#pragma warning(disable:4996)

#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>
#include <bitset>
#include <utility>
#include <iomanip>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

//using namespace std;

const int kMaxn = 100010;

int n, m, len[222];
char s[111][111];
std::pair < std::string , std::string > st[222];
std::bitset<555> c[222][10];

int main() {
	static int i, j, k, x, y, l, mod, now, a, b;
	static bool ans;

	scanf("%d", &n);
	for (i = 1; i <= n; ++i) {
		scanf("%s", s[i]);
		l = (int)strlen(s[i]);
		c[i][0].set();
		for (j = 1; j <= 9 && j <= l; ++j) {
			mod = 1 << j;
			now = 0;
			for (k = 0; k < j; ++k)
				now = (now << 1) + (s[i][k] == '1');
			c[i][j].set(now);
			for (k = j; k < l; ++k) {
				now = (now << 1) + (s[i][k] == '1');
				now %= mod;
				c[i][j].set(now);
			}
		}
		len[i] = l;
		st[i].first = std::string(s[i]).substr(0, std::min(len[i], 9));
		st[i].second = std::string(s[i]).substr(std::max(0, len[i] - 9), std::min(9, len[i]));
	}
	scanf("%d", &m);
	for (i = n + 1; i <= n + m; ++i) {
		scanf("%d%d", &x, &y);
		c[i][0].set();
		for (j = 1; j <= 9; ++j)
			for (a = 0; a < (1 << j); ++a)
				if (c[x][j].test(a) || c[y][j].test(a))
					c[i][j].set(a);
		//printf("%s %s\n", st[x].second.c_str(), st[y].first.c_str());
		std::string str = st[x].second.substr(
			std::max(
				0, (int)st[x].second.length() - 9
			), std::min(
				9, (int)st[x].second.length()
			)
		);
		str.append(st[y].first.substr(0, std::min(9, (int)st[y].second.length())));
		//printf("%s\n", str.c_str());
		l = (int)str.length();
		for (j = 1; j <= 9 && j <= l; ++j) {
			mod = 1 << j;
			now = 0;
			for (k = 0; k < j; ++k)
				now = (now << 1) + (str[k] == '1');
			c[i][j].set(now);
			for (k = j; k < l; ++k) {
				now = (now << 1) + (str[k] == '1');
				now %= mod;
				c[i][j].set(now);
			}
		}
		len[i] = len[x] + len[y];
		//printf("%d\n", len[i]);
		if (len[x] < 9) st[i].first = str.substr(0, std::min((int)str.length(), 9));
		else st[i].first = st[x].first;
		if (len[y] < 9) st[i].second = str.substr(std::max(0, (int)str.length() - 9), std::min(9, (int)str.length()));
		else st[i].second = st[y].second;
		//printf("%s %s\n", st[i].first.c_str(), st[i].second.c_str());
		for (j = 9; j >= 1; --j)
			if ((int)c[i][j].count() == (1 << j)) {
				printf("%d\n", j);
				break;
			}
		if (j < 1) printf("0\n");
	}
	

	//system("pause");
	return 0;
}