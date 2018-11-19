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
const int mod = 1000000007;
const int inf = 1 << 29;
int n, m, T, q, b[30], fl;
int main()
{
	scanf ("%d%d", &n, &m);
	Rep(i, 1, n) {
		int k = 0, z;
		Rep(j, 1, m) {
			scanf ("%d", &z);
			k = k << 1 | z;
		}
		b[k] = 1;
	}
	Rep(i, 0, 1 << m)
		Rep(j, 0, 1 << m) if (b[i] && b[j] && (i & j) == 0) fl = 1;
	puts(fl ? "YES" : "NO");

	return 0;
}
