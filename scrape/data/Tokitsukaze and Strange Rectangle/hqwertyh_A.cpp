#include <bits/stdc++.h>
using namespace std;
 
const int N = 2e5 + 10;
 
struct T { int x, y, id; } a[N];
bool operator < (T a, T b) { return a.y > b.y || (a.y == b.y && a.x < b.x); }
int b[N];
 
int c[N << 2];
 
void modify (int pos, int st, int en, int rt) {
	if (pos < st || pos > en) return;
	if (st == en) { c[rt] = 1; return; } 
	int md = (st + en) >> 1;
	modify(pos, st, md, rt << 1);
	modify(pos, md + 1, en, rt << 1 | 1);
	c[rt] = c[rt << 1] + c[rt << 1 | 1];
}
 
int query (int l, int r, int st, int en, int rt) {
	if (r < st || l > en) return 0;
	if (l <= st && en <= r) return c[rt];
	int md = (st + en) >> 1;
	return query(l, r, st, md, rt << 1) + query(l, r, md + 1, en, rt << 1 | 1);
}
 
int main (void) {
	int n;
	scanf("%d", &n);
	for (int i = 1, x, y; i <= n; i++) {
		scanf("%d%d", &x, &y);
		a[i] = { x, y, 0 };
		b[i] = x;
	}
	sort(b + 1, b + n + 1);
	int m = unique(b + 1, b + n + 1) - (b + 1);
	for (int i = 1; i <= n; i++) {
		a[i].id = lower_bound(b + 1, b + m + 1, a[i].x) - b;
	}
	sort(a + 1, a + n + 1);
 
	long long ans = 0;
	int pre = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i].y != a[i - 1].y) {
			pre = 0;
			for (int j = i; j <= n && a[j].y == a[i].y; j++) {
				modify(a[j].id, 1, m, 1);
			}
		}
		ans += 1ll * query(pre + 1, a[i].id, 1, m, 1) * query(a[i].id, m, 1, m, 1);
		pre = a[i].id;
	}
	printf("%lld\n", ans);
}