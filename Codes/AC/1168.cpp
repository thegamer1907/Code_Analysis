#include<bits/stdc++.h>
#define rep(i,a,b) for (int i=(a); i<=(b); i++)
#define per(i,a,b) for (int i=(a); i>=(b); i--)
using namespace std;

map<string,int> cnt; string s;
int n, m, a, b, ab;

int main() {
	scanf("%d%d", &n, &m);
	rep (i, 1, n) {
		cin >> s;
		cnt[s] = 1;
		a++;
	}
	rep (i, 1, m) {
		cin >> s;
		if (cnt[s]) a--, ab++;
		else b++;
	}
	if (a + (ab&1) <= b) puts("NO");
	else puts("YES");
	
	return 0;
}