#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <queue>
#include <vector>
#include <bitset>
#include <string>
#include <cmath>
#include <set>
#include <map>
#define Rep(i, x, y) for (int i = x; i <= y; i ++)
#define Dwn(i, x, y) for (int i = x; i >= y; i --)
#define RepE(i, x) for (int i = pos[x]; i; i = g[i].nex)
#define ev g[i].y
using namespace std;
typedef long long ll;
typedef double db;
const int mod = 1000000007, N = 105;
const int inf = 1 << 29;
int n, m, T, q, fl;
char t[3], s[N][3];
int main()
{
	scanf ("%s%d", t, &n);
	Rep(i, 1, n) {
		scanf ("%s", s[i]);
		if (s[i][0] == t[0] && s[i][1] == t[1]) fl = 1;
	}
	Rep(i, 1, n) {
		Rep(j, 1, n) {
			if (s[i][1] == t[0] && s[j][0] == t[1]) fl = 1;
		}
	}
	puts(fl ? "YES" : "NO");

	return 0;
}
