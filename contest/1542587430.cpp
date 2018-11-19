#include <stdio.h>
#include <iostream>
#include <vector>
#include <assert.h>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <memory.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
	vector<pair<double, int> > v;
	int h, m, s;
	cin >> h >> m >> s;
	if (h == 12)
		h = 0;
	double passed = (h * 60 * 60 + m * 60 + s) / double(12 * 60 * 60);
	v.push_back(make_pair(passed, 0));
	passed = double(m * 60 + s) / (60 * 60);
	v.push_back(make_pair(passed, 1));
	v.push_back(make_pair(double(s) / 60, 2));
	int t;
	cin >> t;
	if (t == 12)
		t = 0;
	v.push_back(make_pair(double(t) / 12, 3));
	cin >> t;
	if (t == 12)
		t = 0;
	v.push_back(make_pair(double(t) / 12, 4));
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i) {
		int x = v[i].second;
		int y = v[(i + 1) % v.size()].second;
		if ((x == 3 && y == 4) || (x == 4 && y == 3)) {
			puts("YES");
			return 0;
		}
	}

	puts("NO");
	return 0;
}