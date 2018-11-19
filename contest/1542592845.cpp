#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cassert>
#include <cmath>
#include <functional>
#include <queue>
#include <stack>
using namespace std;

using lint = long long;
using ii = pair < int, int >;

const int N = 500005;
const int M = 3;
char a[M];
char b[N][M];

int main() {
	//freopen("in.txt", "r", stdin);
	
	scanf("%s", a);
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", b[i]);
	}
	bool ok = false;

	for (int i = 0; i < n; i++) {
		if (a[0] == b[i][0] && a[1] == b[i][1])ok = true;
		for (int j = 0; j < n; j++) {
			if (a[0] == b[i][1] && a[1] == b[j][0])ok = true;
		}
	}

	if (ok)puts("YES");
	else puts("NO");
	return 0;
}