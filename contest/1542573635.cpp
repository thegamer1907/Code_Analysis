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

struct arr {
	int id, cnt;
	int so[5];
	
	arr() {
		cnt = 0;
	}	
};

const int maxn = 1e5 + 10;
const int mo = 1e9 + 7;
const db eps = acos(-1.0);
const db PI = 1e-8;
int n, k;
bool vis2[21];
int can[5], maybe2[maxn];
arr pr[maxn]; 

int main() {
	int i, j, x;
	scanf("%d%d", &n, &k);
	bool flag1 = 1, flag3 = 0;
	int cnt2 = 0;
	rep(i, 1, k) {
		can[i] = 1;
	}
	rep(i, 1, n) {
		pr[i].id = i;
		rep(j, 1, k) {
			scanf("%d", &x);
			can[j] &= x;
			pr[i].so[j] = x;
			pr[i].cnt += (x == 0);
		}
		pr[i].cnt += 4 - k;
		if (pr[i].cnt == 4) {
			printf("YES");
			return 0;
		}
		if (pr[i].cnt > 1) {
			flag1 = 0;
		}
		if (pr[i].cnt == 3) {
			flag3 = 1;
		}
		if (pr[i].cnt == 2) {
			int x = 0;
			rep(j, 1, 4) {
				x = (x << 1) + pr[i].so[j];
			}
			vis2[x] = 1;
		}
	}
	if (flag1) {
		printf("NO");
		return 0;
	}
	rep(i, 1, k) {
		if (can[i]) {
			break;
		}
	}
	if (i <= k) {
		printf("NO");
		return 0;
	}
	if (flag3) {
		printf("YES");
		return 0;
	}
	rep(i, 3, 6) {
		if (vis2[i] && vis2[15 - i]) {
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}
