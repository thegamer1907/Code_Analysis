#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <map>
#include <queue>
#include <set>
#include <string>

#define rep(i, a, b) for (i = (a); i <= (b); i ++)
#define CLR(x, y) memset(x, y, sizeof(x))
#define fi first
#define se second
#define lowbit(x) ((x) & (-(x)))

using namespace std;

typedef long long ll;
typedef double db;

const int mo = 1e9 + 7;
const db eps = acos(-1.0);
const db PI = 1e-8;
int n, m;

int main() {
	int T, i, j;
	char tar[4], s[4];
	scanf("%s", tar);
	scanf("%d", &n);
	bool cnt0 = 0, cnt1 = 0;
	rep(i, 1, n) {
		scanf("%s", s);
		if (s[1] == tar[0]) {
			cnt0 = 1;
		}
		if (s[0] == tar[1]) {
			cnt1 = 1;
		}
		if (s[0] == tar[0] && s[1] == tar[1]) {
			cnt0 = cnt1 = 1;
		}
	}
	printf("%s", (cnt0 && cnt1) ? "YES": "NO");
	return 0;
}
