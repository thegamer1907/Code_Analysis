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

int n, k, cnt[kMaxn], num;

int main() {
	static int i, j, k, x, y;
	static bool ans;

	scanf("%d%d", &n, &k);
	memset(cnt, 0, sizeof(cnt));
	ans = false;
	for (i = 1; i <= n; ++i) {
		num = 0;
		for (j = 1; j <= k; ++j) {
			scanf("%d", &x);
			num = (num << 1) + x;
		}
		if (num == 0) ans = true;
		for (j = 0; j < 16; ++j)
			if (!(num & j) && cnt[j])
				ans = true;
		++cnt[num];
	}
	printf("%s", ans ? "YES" : "NO");
	

	//system("pause");
	return 0;
}