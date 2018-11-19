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
	int h, m, s, t1, t2, ph, pm, ps, inv1, inv2, pph, ppm, pps;
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	ph = h % 12 + (inv1 = (m != 0 || s != 0));
	pph = ph - inv1;
	if (!pph) {
		pph = 12;
	}
	pm = (m + (inv2 = (s != 0)) + 4) / 5;
	if (!pm) {
		pm = 12;
	}
	ppm = pm - ((m + inv2) % 5 != 0);
	if (!ppm) {
		ppm = 12;
	}
	ps = (s + 4) / 5;
	if (!ps) {
		ps = 12;
	}
	pps = ps - (s % 5 != 0);
	if (!pps) {
		pps = 12;
	}
	//printf("%d %d %d %d %d %d\n", ph, pph, pm, ppm, ps, pps);
	if (t1 == t2) {
		printf("YES");
		return 0;
	}
	if (t1 > t2) {
		swap(t1, t2);
	}
		rep(i, t1 + 1, t2) {
			if (i == ph || i == pm || i == ps) {
				break;
			}
		}
		if (i > t2) {
			printf("YES");
			return 0;
		}
		rep(i, t2 + 1, 12) {
			if (i == ph || i == pm || i == ps) {
				break;
			}
		}
		if (i <= 12) {
			printf("NO");
			return 0;
		}
		rep(i, 1, t1) {
			if (i == ph || i == pm || i == ps) {
				break;
			}
		}
		if (i > t1) {
			printf("YES");
		}
		else {
			printf("NO");
		}
	return 0;
}
