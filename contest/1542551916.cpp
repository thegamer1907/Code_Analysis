#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 10002, M = 1e9 + 7;
set<string> st[N][20];
string p[N], s[N], tmp;
int n, m;

int main() {
//	freopen("input.txt", "r", stdin);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		for (int j = 0; j < tmp.size(); j++)
			for (int l = 1; l < 10; l++) {
				if (j + l > tmp.size())
					continue;
				st[i][l].insert(tmp.substr(j, l));
			}
		p[i] = tmp.substr(0, 9);
		if (tmp.size() <= 9)
			s[i] = tmp;
		else
			s[i] = tmp.substr(tmp.size() - 9, 9);
	}
	scanf("%d", &m);
	for (int a, b, i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		a--, b--;
		for (int h = 0; h < s[a].size(); h++)
			for (int j = p[b].size(); j >= 1; j--) {
				st[n + i][s[a].size() - h + j].insert(
						s[a].substr(h) + p[b].substr(0, j));
			}

		for (int l = 1; l < 10; l++) {
			for (set<string>::iterator it = st[a][l].begin();
					it != st[a][l].end(); it++)
				st[n + i][l].insert(*it);
			for (set<string>::iterator it = st[b][l].begin();
					it != st[b][l].end(); it++)
				st[n + i][l].insert(*it);
		}

		if (p[a].size() >= 9)
			p[i + n] = p[a];
		else
			p[i + n] = p[a] + p[b].substr(0, 9 - p[a].size());

		if (s[b].size() >= 9)
			s[i + n] = s[b];
		else {
			signed int ss = s[a].size() + s[b].size();

			ss -= 9;
			ss = max(ss, 0);
			s[i + n] = s[a].substr(ss) + s[b];
		}
		int meh = 0;
		for (int l = 9; l >= 1; l--) {
			if (st[n + i][l].size() == (1 << l)) {
				meh = l;
				break;
			}
		}
		cout << meh << endl;
	}

}
