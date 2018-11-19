#include <bits/stdc++.h>

int n;

std::string ss[205][2];

std::bitset<1 << 10> bt[205][11];
int ans[205];

void Calc(const std::string &s, int id) {
	for (int k = 1; k <= 10 && k <= s.length(); ++k) {
		int tmp = 0;
		for (int i = 0; i < k; ++i)
			tmp = tmp << 1 | (s[i] - '0');
		bt[id][k][tmp] = 1;
		for (int i = k; i < s.length(); ++i) {
			tmp = (tmp << 1 | (s[i] - '0')) & ((1 << k) - 1);
			bt[id][k][tmp] = 1;
		}
		
		std::cerr << id << " " << k << " " << bt[id][k].count() << std::endl;
		
		if (bt[id][k].count() == (1 << k)) ans[id] = k;
	}
}

void Add(const std::string &s, std::bitset<1 << 10> *bs) {
	for (int k = 1; k <= 10 && k <= s.length(); ++k) {
		int tmp = 0;
		for (int i = 0; i < k; ++i)
			tmp = tmp << 1 | (s[i] - '0');
		bs[k][tmp] = 1;
		for (int i = k; i < s.length(); ++i) {
			tmp = (tmp << 1 | (s[i] - '0')) & ((1 << k) - 1);
			bs[k][tmp] = 1;
		}
	}
}

int main() {
	std::cin >> n;
	for (int i = 1; i <= n; ++i) {
		static std::string s;
		
		std::cin >> s;
		Calc(s, i);
		ss[i][0] = s.substr(0, std::min((int)s.length(), 10));
		ss[i][1] = s.substr(std::max((int)s.length() - 10, 0), std::min((int)s.length(), 10));
	}
	
	int m; std::cin >> m;
	for (int u, v, i = n + 1; i <= n + m; ++i) {
		std::cin >> u >> v;
		for (int k = 1; k <= 10; ++k) {
			bt[i][k] = bt[u][k] | bt[v][k];
			Add(ss[u][1] + ss[v][0], bt[i]);
			if (bt[i][k].count() == (1 << k)) ans[i] = k;
		}
		ss[i][0] = ss[u][0];
		if (ss[u][0].length() < 10)
			ss[i][0] += ss[v][0].substr(0, std::min(10 - ss[u][0].length(), ss[v][0].length()));
		ss[i][1] = ss[v][1];
		if (ss[v][1].length() < 10) {
			int len = std::min(10 - ss[v][1].length(), ss[u][1].length());
			ss[i][1] = ss[u][1].substr(ss[u][1].length() - len, len) + ss[i][1];
		}
		
		std::cout << ans[i] << std::endl;
	}
	
	return 0;
}