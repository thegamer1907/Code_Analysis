#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
#include <bitset>

using namespace std;
#define LL long long
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define pill pair<int, int>
#define mst(a, b)	memset(a, b, sizeof a)
#define REP(i, x, n)	for(int i = x; i <= n; ++i)
const int MOD = 1e9 + 7;
const int qq = 1e5 + 10;
const LL INF = 1e9 + 10;

int main(){
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	if(h == 12)	h = 0;
	double deg[3];
	deg[2] = s * 1.0 / 60 * 360.0;
	deg[1] = m * 1.0 / 60 * 360.0 + (6.0 * (s * 1.0 / 60));
	deg[0] = h * 1.0 / 12 * 360.0 + (30.0 * (m * 1.0 / 60)) + (s * 1.0 / (12 * 60 * 60));
	sort(deg, deg + 3);
	double d1 = t1 * 1.0 / 12 * 360.0;
	double d2 = t2 * 1.0 / 12 * 360.0;
	bool f = false;
/*	printf("%lf %lf %lf\n", deg[0], deg[1], deg[2]);
	printf("%lf %lf\n", d1, d2);*/
	for(int i = 1; i < 3; ++i) {
		if(deg[i - 1] <= d1 && d1 <= deg[i]) {
			if(deg[i - 1] <= d2 && d2 <= deg[i])
				f = true;
		}
	}
	if(d1 >= deg[2] || d1 <= deg[0]) {
		if(d2 >= deg[2] || d2 <= deg[0]) {
			f = true;
		}
	}
	if(f)	puts("YES");
	else	puts("NO");
	return 0;
}