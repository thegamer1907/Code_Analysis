#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#define INF 0x3f3f3f3f
#define MOD 1000000007
using namespace std;
typedef long long LL;

int N, K;
const int max_s = 20;
bool vis[max_s];

int main() {
	scanf("%d%d", &N, &K);
	for (int i = 1; i <= N; i++) {
		int state = 0;
		for (int j = 1; j <= K; j++) {
			int t;
			scanf("%d", &t);
			state |= ((1 << (j - 1)) * t);
		}
		vis[state] = 1;
	}
	bool flag = 0;
	for (int i = 0; i < (1 << 4) && !flag; i++) {
		for (int j = 0; j < (1 << 4) && !flag; j++) {
			if (!vis[i] || !vis[j]) continue;
			if ((i & j) == 0) {
				flag = 1;
			}
		}
	}
	if (flag) {
		puts("YES");
	} else {
		puts("NO");
	}
	return 0;
}