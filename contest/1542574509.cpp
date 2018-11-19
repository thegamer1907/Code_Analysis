#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

#define INF 100000000
#define MINF 10000000000000000LL

int h, m, s, t1, t2;

int main()
{
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	if (t1 > t2) swap(t1, t2);
	bool sclockwise = true, mclockwise = true, hclockwise = true;
	int pos = s / 5;
	if (pos >= t1 && pos < t2) sclockwise = false;
	pos = m / 5;
	if (pos >= t1 && pos < t2) mclockwise = false;
	if (h >= t1 && h < t2) hclockwise = false;
	
	bool clockwise = true, counterwise = false;
	
	if (!(sclockwise && mclockwise && hclockwise)) clockwise = false;
	if (!(sclockwise || mclockwise || hclockwise)) counterwise = true;
	if (clockwise || counterwise) puts("YES");
	else puts("NO");
	return 0;
}