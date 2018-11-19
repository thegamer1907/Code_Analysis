#include <cstdio>
#include <iostream>
#include <string.h>
#include <string> 
#include <map>
#include <queue>
#include <deque>
#include <vector>
#include <set>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <stack>
#include <iomanip>
#include <unordered_map>
#define mem0(a) memset(a,0,sizeof(a))
#define meminf(a) memset(a,0x3f,sizeof(a))
using namespace std;
typedef long long ll;
typedef long double ld;
typedef double db;
const int maxn = 105, inf = 0x3f3f3f3f;
const ll llinf = 0x3f3f3f3f3f3f3f3f;
const ld pi = acos(-1.0L);
string a[maxn * 2][2];
int lc[maxn * 2], rc[maxn * 2], len[maxn * 2];
bool visit[maxn * 2];
unordered_map<string, int> mp;
ll cnt;

void dfs(int now, int k) {
	if (visit[now]) return;
	visit[now] = 1;
	if (lc[now] == 0) {
		for (int i = 0; i + k <= len[now]; i++) {
			string s = a[now][0].substr(i, k);
			if (mp[s] == 0) {
				mp[s]++; cnt++;
			}
		}
	}
	else {
		string s = a[lc[now]][1] + a[rc[now]][0];
		int le = s.length();
		for (int i = 0; i + k <= le; i++) {
			string t = s.substr(i, k);
			if (mp[t] == 0) {
				mp[t]++; cnt++;
			}
		}
		dfs(lc[now], k); dfs(rc[now], k);
	}
}

bool check(int k, int n) {
	mp.clear();
	mem0(visit);
	cnt = 0;
	dfs(n, k);
	if (cnt == (1 << k)) return true; else return false;
}

int main() {
	int n, m, i, j, l, r, mid, ans;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		cin >> a[i][0];
		a[i][1] = a[i][0];
		lc[i] = rc[i] = 0;
		len[i] = a[i][0].length();
	}
	scanf("%d", &m);
	for (i = n + 1; i <= n + m; i++) {
		scanf("%d%d", &lc[i], &rc[i]);
		a[i][0] = a[lc[i]][0];
		if (len[lc[i]] <= 100) {
			a[i][0] = a[i][0] + a[rc[i]][0];
		}
		if (a[i][0].length() >= 100) a[i][0] = a[i][0].substr(0, 100);
		a[i][1] = a[rc[i]][1];
		if (len[rc[i]] <= 100) {
			a[i][1] = a[lc[i]][1] + a[i][1];
		}
		if (a[i][1].length() >= 100) a[i][1] = a[i][1].substr(a[i][1].length() - 100, 100);
		l = 0, r = 100, ans = 0;
		while (l <= r) {
			mid = (l + r) / 2;
			if (check(mid, i)) ans = mid, l = mid + 1; else r = mid - 1;
		}
		printf("%d\n", ans);
	}
	return 0;
}
