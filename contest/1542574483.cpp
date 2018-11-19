#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair < int, int > ii;

const int N = 100 + 5;
const int K = 30;

int n, m;
string s[N * 2], st[N * 2], nd[N * 2];
int sz[N * 2];
int res[N * 2];
bitset < 66000 > a[N * 2][15];

void compute(int i) {
	for(int k = 1;k < 15; k++) {
		for(int j = 0; j + k - 1 < s[i].size(); j++) {
			int cur = 0;
			for(int t = j; t < j + k; t++)
				cur = (cur << 1) | (s[i][t] - '0');
			// printf("1cur = %d\n", cur);
			a[i][k].set(cur);
		}
		if(a[i][k].count() == (1 << k))
			res[i] = k;
	}
}

void addBeg(int i, int x) {
	for(int k = res[i] + 1;k < 15; k++) {
		int cur = x - '0';
		// puts("befff2");
		// puts(st[i].c_str());
		for(int j = 0; j < k - 1; j++)
			cur = (cur << 1) | (st[i][j] - '0');
		// printf("2cur = %d\n", cur);
		a[i][k].set(cur);
		if(a[i][k].count() == (1 << k))
			res[i] = k;
	}
	st[i] = (char)x + st[i];
	st[i] = st[i].substr(0, K);
}

void addEnd(int i, int x) {
	for(int k = res[i] + 1;k < 15; k++) {
		int cur = 0;
		for(int j = nd[i].size() - (k - 1); j < nd[i].size(); j++)
			cur = (cur << 1) | (nd[i][j] - '0');
		// printf("3befcur = %d\n", cur);
		cur = (cur << 1) | (x - '0');
		// printf("3cur = %d\n", cur);
		a[i][k].set(cur);
		if(a[i][k].count() == (1 << k))
			res[i] = k;
	}
	// printf("nd[i].size() = %d\n", nd[i].size());
	nd[i] += (char)x;
	nd[i] = nd[i].substr(nd[i].size() - K, K);
}

int main() {

	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		cin >> s[i];
		sz[i] = s[i].size();
		st[i] = nd[i] = s[i];
		compute(i);
	}

	scanf("%d", &m);

	for(int i = 1; i <= m; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		if(sz[x] + sz[y] <= 2 * K) {
			s[n + i] = s[x] + s[y];
			st[n + i] = nd[n + i] = s[n + i];
			sz[n + i] = s[n + i].size();
			compute(n + i);
		}
		else {
			// printf("sz[%d] = %d sz[%d] = %d\n", x, sz[x], y, sz[y]);
			sz[n + i] = 500;
			if(sz[x] <= K) {
				// puts("smallx");
				st[n + i] = st[y];
				nd[n + i] = nd[y];
				for(int k = 0; k < 15; k++)
					a[n + i][k] = a[y][k];
				// printf("styyyy and size = %d sz[y] = %d\n", st[y].size(), sz[y]);
				// puts(st[y].c_str());
				for(int j = (int) s[x].size() - 1; j >= 0; j--) {
					addBeg(n + i, s[x][j]);
				}
			}
			else if(sz[y] <= K) {
				// puts("smally");
				// puts(s[y].c_str());
				// puts(nd[x].c_str());
				// printf("st[x].sz nd[x].sz = %d %d\n", st[x].size(), nd[x].size());
				st[n + i] = st[x];
				nd[n + i] = nd[x];
				for(int k = 0; k < 15; k++)
					a[n + i][k] = a[x][k];
				// printf("stx = %d ndx = %d\n", st[x].size(), nd[x].size());
				// printf("nd[n + i].size() = %d\n", nd[n + i].size());
				for(int j = 0; j < s[y].size(); j++) {
					addEnd(n + i, s[y][j]);
				}
			}
			else {
				st[n + i] = st[x];
				nd[n + i] = nd[y];
				// printf("nd[x].sz = %d st[y].sz = %d\n", nd[x].size(), st[y].size());
				for(int k = 1; k < 15; k++) {
					a[n + i][k] = a[x][k] | a[y][k];
					for(int iii = 1; iii < k; iii++) {
						int cur = 0;
						for(int kk = 0; kk < k; kk++) {
							if(kk < iii) {
								// printf("sz1 = %d ind = %d\n", nd[x].size(), nd[x].size() - iii + k);
								cur = (cur << 1) | (nd[x][nd[x].size() - iii + kk] - '0');
							}
							else {
								// printf("sz2 = %d ind = %d\n", st[y].size(), kk - iii);
								cur = (cur << 1) | (st[y][kk - iii] - '0');
							}
						}
						// printf("cur = %d\n", cur);
						a[n + i][k].set(cur);
					}
					if(a[n + i][k].count() == (1 << k))
						res[n + i] = k;
				}
			}
			// printf("\n\n\n\n\n\n\nsz = %d st = %d nd = %d\n", sz[n + i], st[n + i].size(), nd[n + i].size());
		}
		printf("%d\n", res[n + i]);
	}

    return 0;

}

