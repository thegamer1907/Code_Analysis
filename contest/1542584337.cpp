#pragma warning(disable:4996)

#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>
#include <bitset>
#include <utility>
#include <iomanip>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

//using namespace std;

const int kMaxn = 100010;

int h, m, s, t1, t2;
double a1, a2, a3, b1, b2;

bool ok() {
	if (a1 < b1 || a1 > b2) {
		if (a2 > b1 && a2 < b2) return false;
		if (a3 > b1 && a3 < b2) return false;
		return true;
	}
	else {
		if (a2 > b1 && a2 < b2 && a3 > b1 && a3 < b2) return true;
		return false;
	}
}

int main() {
	static int i, j, k, x, y;

	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	if (h == 12) h = 0;
	if (t1 == 12) t1 = 0;
	if (t2 == 12) t2 = 0;
	a1 = h / 12.0 * 360.0 + m / 12.0 / 60.0 * 6.0 + s / 12.0 / 60.0 / 60.0 * 0.1;
	a2 = m / 60.0 * 360.0 + s / 60.0 / 60.0 * 360.0;
	a3 = s / 60.0 * 360.0;
	b1 = t1 * 30;
	b2 = t2 * 30;
	if (b1 > b2) std::swap(b1, b2);
	printf("%s", ok() ? "YES" : "NO");
	
	

	//system("pause");
	return 0;
}