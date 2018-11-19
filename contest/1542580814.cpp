#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cassert>
#include <cmath>
#include <functional>
#include <queue>
#include <stack>
using namespace std;

using lint = long long;
using ii = pair < int, int >;

const int N = 500005;
int h, m, s, t1, t2;
double fh, fm, fs, ft1, ft2;
int x, y;
bool get() {
	if (m || s)fh += 0.1;
	if (s)fm += 0.1;
	//if (ft1 == fh || ft1 == fm || ft1 == fs)return false;
	//if (ft2 == fh || ft2 == fm || ft2 == fs)return false;
	int cnt = 0;
	if (ft1 < fh && fh < ft2)++cnt;
	if (5*ft1 < fm && fm < 5*ft2)++cnt; 
	if (5*ft1 < fs && fs < 5*ft2)++cnt;
	//printf("%lf %lf %lf %lf %lf\n",ft1,ft2,fh,fm,fs);
	//printf("%d\n", cnt);
	return cnt == 0 || cnt == 3;
}

int main() {
	//freopen("in.txt", "r", stdin);
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	int x = min(t1, t2), y = max(t1, t2);
	t1 = x, t2 = y;
	fh = (double)h;
	fm = (double)m;
	fs = (double)s;
	ft1 = (double)t1;
	ft2 = (double)t2;
	bool ok[2] = { false, false };
	ok[0] = get();
	if (ok[0] || ok[1]) {
		puts("YES");
	}
	else {
		puts("NO");
	}
	return 0;
}
