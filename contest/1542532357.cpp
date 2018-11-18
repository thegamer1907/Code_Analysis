#include <bits/stdc++.h>
using namespace std;
#define N 110
#define inf 1000000000
#define ep 1e-9
#define mp make_pair
#define pb push_back
#define ll long long
template<class T> void chkmax(T &a, T b) {if (a < b) a = b;}
template<class T> void chkmin(T &a, T b) {if (a > b) a = b;}
typedef pair<int, int> pii;

char s[3];
char c[N][3];
int n;

int main() {
	scanf("%s%d", s, &n);
	bool ans = 0;
	for (int i = 1; i <= n; i ++) {
		scanf("%s", c[i]);
		if (!strcmp(c[i], s)) ans = 1;
	}
	bool f  = 0, g = 0;
	for (int i = 1; i <= n; i ++) {
		if (s[0] == c[i][1]) f = 1;
		if (s[1] == c[i][0]) g = 1;
	}
	if (f && g) ans = 1;
	if (ans) puts("YES");
	else puts("NO");
    return 0;
}
