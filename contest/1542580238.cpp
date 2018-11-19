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

#define MAXN 1000005
int n;

bool start[128], end_[128];

int main() {
	char c1,c2,c3,c4;
	scanf(" %c %c", &c1, &c2);
	scanf(" %d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %c %c", &c3, &c4);
		if (c1 == c3 && c2 == c4) {
			printf("YES\n");
			return 0;
		}
		if ((end_[c1] && c3 == c2) || (start[c2] && c4 == c1)) {
			printf("YES\n");
			return 0;
		}
		start[c3] = true, end_[c4] = true;
		if ((end_[c1] && c3 == c2) || (start[c2] && c4 == c1)) {
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}
