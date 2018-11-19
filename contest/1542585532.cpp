#include <cstdio>
#include <cstring>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;
int sz[20];
int main () {
	int N, K;
	scanf("%d%d", &N, &K);
	for(int i = 1; i<=N; i++) {
		int cur = 0, t;
		for(int j = 1; j<=K; j++)
			scanf("%d", &t), cur += (t<<(j-1));
		sz[cur] ++;
	}
	if(sz[0]) {puts("YES"); return 0;}
	for(int s = 0; s<(1<<K); s++) {
		for(int s2 = 0; s2<(1<<K); s2++)
			if(sz[s] && sz[s2] && (s&s2) == 0) {puts("YES"); return 0;}
	}
	puts("NO");
	return 0;
}
