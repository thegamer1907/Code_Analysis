#include<bits/stdc++.h>
#define rep(i,a,b) for (int i=(a); i<=(b); i++)
#define per(i,a,b) for (int i=(a); i>=(b); i--)
using namespace std;

const int maxn = 10005;
int pa[maxn], p, n, ans;

inline int getpa(int x) {
	return pa[x] == x ? x : pa[x] = getpa(pa[x]);
}

int main() {
	scanf("%d", &n);
	rep (i, 1, n) pa[i] = i;
	rep (i, 1, n) {
		scanf("%d", &p);
		pa[i] = getpa(p);
	}
	rep (i, 1, n)
		if (pa[i] == i) ans++;
	printf("%d\n", ans);
	
	return 0;
}