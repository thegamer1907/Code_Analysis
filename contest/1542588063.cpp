#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <bitset>
#include <limits>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <functional>
#include <map>
#include <queue>
#include <utility>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

int main ()
{
	ios_base::sync_with_stdio (false);

#ifndef ONLINE_JUDGE
	freopen ("input0.in", "r", stdin);
	freopen ("output.out", "w", stdout);
#endif

	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;

	const double PI = 3.141592653589793238462643383279502884;
	double rad[3], tar[2];

	if (h == 12)
		h = 0;
	if (t1 == 12)
		t1 = 0;
	if (t2 == 12)
		t2 = 0;

	rad[0] = 2 * PI * s / 60.0;
	rad[1] = 2 * PI * (m / 60.0 + s / 3600.0);
	rad[2] = 2 * PI * (h / 12.0 + m / 12.0 / 60.0 + s / 12.0 / 3600.0);
	tar[0] = 2 * PI * t1 / 12.0;
	tar[1] = 2 * PI * t2 / 12.0;

	for (int a = 0; a < 3; a++)
		if (rad[a] >= 2 * PI)
			rad[a] -= 2 * PI;

	if (tar[0] > tar[1])
		swap (tar[0], tar[1]);

	bool itsc = false;
	for (int a = 0; a < 3; a++)
		if (rad[a] > tar[0] && rad[a] < tar[1])
			itsc = true;

	if (!itsc) {
		cout << "YES";
		return 0;
	}

	itsc = false;
	for (int a = 0; a < 3; a++)
		if ((rad[a] > tar[1] && rad[a] <= 2 * PI) || (rad[a] >= 0 && rad[a] < tar[0]))
			itsc = true;

	if (!itsc)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}