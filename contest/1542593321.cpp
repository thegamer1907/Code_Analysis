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

int n;
char a[kMaxn][5];

bool ok() {
	static int i, j;
	for (i = 1; i <= n; ++i) {
		if (a[i][0] == a[0][0] && a[i][1] == a[0][1])
			return true;
		for (j = 1; j <= n; ++j)
			if (a[j][1] == a[0][0] && a[i][0] == a[0][1])
				return true;
	}
	return false;
}

int main() {
	static int i, j, k, x, y;

	scanf("%s", a[0]);
	scanf("%d", &n);
	for (i = 1; i <= n; ++i)
		scanf("%s", a[i]);
	printf("%s", ok() ? "YES" : "NO");

	//system("pause");
	return 0;
}