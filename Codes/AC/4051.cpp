#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#define INF 0x3f3f3f3f
#define MOD 1000000007
using namespace std;
typedef long long LL;

int N, M, Q;
const int maxn = 1e5 + 10;
int A[3][maxn];
int B[maxn];
int bst[maxn];

int main() {
	for (int j = 1; j <= M; j++) {
		B[j] = 1;
	}
	scanf("%d%d", &N, &M);
	for (int i = 1; i <= N; i++) {
		int t = i & 1;
		for (int j = 1; j <= M; j++) {
			scanf("%d", &A[t][j]);
		}
		for (int j = 1; j <= M; j++) {
			B[j] = A[t][j] >= A[!t][j] ? B[j] : i;
		}
		bst[i] = N + 1;
		for (int j = 1; j <= M; j++) {
			bst[i] = min(bst[i], B[j]);
		}
	}
	scanf("%d", &Q);
	int dn, up;
	while (Q--) {
		scanf("%d%d", &dn, &up);
		if (bst[up] <= dn) {
			puts("Yes");
		} else {
			puts("No");
		}
	}
	return 0;
}