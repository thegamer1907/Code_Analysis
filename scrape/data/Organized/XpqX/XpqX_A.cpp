#include <set>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <bitset>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

#define ls (rt << 1)
#define rs (rt << 1 | 1)
#define mid ((l + r) >> 1)
#define lson rt << 1, l, mid
#define rson rt << 1 | 1, mid + 1, r
#define debug cout << "DEBUG" << endl;
#define isdigit(x) ((x) >= '0' && (x) <= '9')
#define fast ios::sync_with_stdio(false);cin.tie(NULL);

typedef long long LL;
typedef pair<int, int> P;
typedef unsigned long long ULL;
const LL MOD = 1e9 + 7;
const int maxm = 1e4 + 7;
const int maxn = 2e6 + 7;
const int inf = 0x3f3f3f3f;
const LL INF = 0x3f3f3f3f3f3f3f3f;

inline LL read() {
	LL a = 0; int f = 0; char p = getchar();
	while (!isdigit(p)) { f |= p == '-'; p = getchar(); }
	while (isdigit(p)) { a = (a << 3) + (a << 1) + (p ^ 48); p = getchar(); }
	return f ? -a : a;
}

inline void write(LL x)
{
	if (x < 0) putchar('-'), x = -x;
	if (x > 9) write(x / 10);
	putchar(x % 10 + '0');
}

LL num[maxn];
LL n, m, k, cnt = 0, tot = 0, p = 1, ans = 0;

int main() {
	fast; cin >> n >> m >> k;
	for (int i = 1; i <= m; ++i) cin >> num[i];
	while (tot < n && p <= m) {
		if (num[p] - cnt > tot) {
			if ((num[p] - cnt - tot) % k == 0) tot += (num[p] - cnt - tot);
			else tot += (num[p] - cnt - tot) / k * k + k;
		}
		//cout << tot << endl;
		int temp = 0;
		while (p <= m && num[p] - cnt <= tot) p++, temp++;
		ans++, cnt += temp;
	}
	return cout << ans << endl, 0;
}