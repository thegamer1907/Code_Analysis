#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <cmath>
#include <stack>
#include <queue>
#include <deque>
#define INF 1e9
#define LINF 1e18
using namespace std;
int N;
char f[3], a[101][3];
int main() {
	scanf("%s", &f);
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", &a[i]);
		if (a[i][0] == f[0] && a[i][1] == f[1]) {
			puts("YES");
			return 0;
		}
		else if (a[i][0] == f[1] && a[i][1] == f[0]) {
			puts("YES");
			return 0;
		}
	}
	for(int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			if (i != j) {
				if (f[0] == a[i][1] && f[1] == a[j][0]) {
					puts("YES");
					return 0;
				}
			}
		}
	puts("NO");
	return 0;
}