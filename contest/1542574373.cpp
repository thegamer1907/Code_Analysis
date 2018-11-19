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
			a[i][k].set(cur);
		}
		if(a[i][k].count() == (1 << k))
			res[i] = k;
	}
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
			sz[n + i] = 500;
			for(int k = 1; k < 15; k++) {
				a[n + i][k] = a[x][k] | a[y][k];
				for(int iii = 1; iii < k; iii++) {
					if(iii > nd[x].size() or k - iii > st[y].size())
						continue;
					int cur = 0;
					for(int kk = 0; kk < k; kk++) {
						if(kk < iii)
							cur = (cur << 1) | (nd[x][nd[x].size() - iii + kk] - '0');
						else
							cur = (cur << 1) | (st[y][kk - iii] - '0');
					}
					// printf("cur = %d\n", cur);
					a[n + i][k].set(cur);
				}
				if(a[n + i][k].count() == (1 << k))
					res[n + i] = k;
			}
			st[n + i] = (st[x] + st[y]).substr(0, K);
			nd[n + i] = (nd[x] + nd[y]).substr(nd[x].size() + nd[y].size() - K, K);
		}
		printf("%d\n", res[n + i]);
	}

    return 0;

}

