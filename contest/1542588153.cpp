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
int h, m, s, t1, t2, k;
int main()
{
	scanf ("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	m /= 5, s /= 5;
	if (t1 > t2) swap(t1, t2);
	if (t1 <= h && h < t2) k ++;
	if (t1 <= m && m < t2) k ++;
	if (t1 <= s && s < t2) k ++;
	puts( (!k || k == 3) ? "YES" : "NO" );

	return 0;
}
