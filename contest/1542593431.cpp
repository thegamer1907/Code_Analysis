
// ~/BAU/ACM-ICPC/Teams/A++/BlackBurn95
// ~/sudo apt-get Accpeted

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <assert.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

char s[3], t[101][3];
int n;

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif

	scanf("%s%d", s, &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", t[i]);

		if (t[i][0] == s[0] && t[i][1] == s[1]) {
			puts("YES");
			return 0;
		}
	}

	for(int i=0; i<n; i++)
		for (int j = 0; j < n; j++) {
			if (t[i][1] == s[0] && t[j][0] == s[1]) {
				puts("YES");
				return 0;
			}
		}

	puts("NO");

	return 0;
}
