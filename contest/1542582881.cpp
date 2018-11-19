#include <iostream>
#include <cstdio>
#include <algorithm>
#define N 100005
using namespace std;

typedef long long ll;
ll M = 43200;
ll h, m, s, t1, t2, g[5];
int main()
{
	cin >> h >> m >> s >> t1 >> t2;
	if (h == 12) h = 0;
	if (t1== 12) t1 = 0;
	if (t2 == 12) t2 = 0;
	g[0] = 30 * 120 * h + 60 * m + s;
	g[1] = 6 * 120 * m + 12 * s;
	g[2] = 6 * 120 * s;
	t1 *= 30;
	t2 *= 30;
	t1 *= 120;
	t2 *= 120;
	if (t1 > t2) swap(t1, t2);
	sort(g, g + 3);
	t1 = (t1 - g[0] + M) % M;
	t2 = (t2 - g[0] + M) % M;
	g[1] -= g[0];
	g[2] -= g[0];
	g[0] = 0;
	g[3] = M;
	if (g[0] < t1 && t1 < g[1] && g[0] < t2 && t2 < g[1]) {
		cout << "YES";
	} else if (g[1] < t1 && t1 < g[2] && g[1] < t2 && t2 < g[2]) {
		cout << "YES";
	} else if (g[2] < t1 && t1 < g[3] && g[2] < t2 && t2 < g[3]) {
		cout << "YES";
	}	else {
		cout << "NO";
	}
    return 0;
}

