#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <queue>
using namespace std;

bool check(double a, double b, double x, double y)
{
	return x <= a && x <= b && a <= y && b <= y;
}

bool check(double a, double x, double y)
{
	return x <= a && a <= y;
}

int main()
{
	vector<double> hands;
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	if (h == 12)
	{
		h = 0;
	}
	if (t1 == 12)
	{
		t1 = 0;
	}
	if (t2 == 12)
	{
		t2 = 0;
	}
	double sdegree = s * 6;
	double mdegree = m * 6 + sdegree / 60;
	double hdegree = h * 30 + mdegree / 12;
	hands.push_back(hdegree);
	hands.push_back(mdegree);
	hands.push_back(sdegree);
	sort(hands.begin(), hands.end());
	bool ok = false;
	double d1 = 30 * t1;
	double d2 = 30 * t2;
	if (check(d1, d2, 0, hands[0]))
	{
		ok = true;
	}
	if (check(d1, d2, hands[0], hands[1]))
	{
		ok = true;
	}
	if (check(d1, d2, hands[1], hands[2]))
	{
		ok = true;
	}
	if (check(d1, d2, hands[2], 360))
	{
		ok = true;
	}
	if ((check(d1, 0, hands[0]) && check(d2, hands[2], 360)) || (check(d2, 0, hands[0]) && check(d1, hands[2], 360)))
	{
		ok = true;
	}
	printf("%s\n", ok ? "YES" : "NO");
	return 0;
}