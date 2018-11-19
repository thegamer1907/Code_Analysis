// #include <bits/stdc++.h>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <vector>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

bool solve(double p0, double p1, double p2, int t1, int t2) {
	if (t2 < p0) return true;
	if (p0 < t1 && t2 < p1) return true;
	if (p1 < t1 && t2 < p2) return true;
	if (p2 < t1) return true;
	if (t1 < p0 && t2 > p2) return true;
	return false;
}

int main() {
	int h, m, s, t1, t2;
	scanf(" %d %d %d %d %d", &h, &m, &s, &t1, &t2);
	t1 *= 5, t2 *= 5;
	if (t1 >= 60) t1 -= 60;
	if (t2 >= 60) t2 -= 60;

	double ps = s;
	double pm = m + ps / 60;
	if (pm > 60.0) pm -= 60.0;
	if (h == 12) h = 0;
	double ph = 5*h + pm / 60;
	if (ph > 60.0) ph -= 60.0;

	vector<double> v;
	v.push_back(ps), v.push_back(pm), v.push_back(ph), sort(v.begin(), v.end());
	double p0 = v[0], p1 = v[1], p2 = v[2];

	if (t1 > t2) swap(t1, t2);

	//printf("%.1lf %.1lf %.1lf %d %d\n", p0, p1, p2, t1, t2);
	printf(solve(p0, p1, p2, t1, t2) ? "YES\n" : "NO\n");
	return 0;
}
