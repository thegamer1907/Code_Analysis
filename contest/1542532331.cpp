#include <bits/stdc++.h>
using namespace std;
#define N 100010
#define inf 1000000000
#define ep 1e-9
#define mp make_pair
#define pb push_back
#define ll long long
template<class T> void chkmax(T &a, T b) {if (a < b) a = b;}
template<class T> void chkmin(T &a, T b) {if (a > b) a = b;}
typedef pair<int, int> pii;

int n, k;
int a;
bool vis[20];

int main() {
	scanf("%d%d", &n, &k);
	for (int i = 1, tmp; i <= n; i ++) {
		tmp = 0;
		for (int i = 1; i <= k; i ++) {
			scanf("%d", &a);
			tmp = 2 * tmp + a;
		}
		vis[tmp] = 1;
	}
	bool ans = 0;
	if (vis[0]) ans = 1;
	for (int i = 0; i < (1<<k); i ++) {
		for (int j = 0; j < (1<<k); j ++) {
			if (!(i&j) && vis[i] && vis[j]) {ans = 1; break;}
		}
		if (ans) break;
	}
	if (ans) puts("YES");
	else puts("NO");
    return 0;
}
