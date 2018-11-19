#include <cstdio>
#include <set>
using namespace std;

int N, K, C[5], A[100005][5];
set<int> S;

int main() {
	int i, j, n;
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++) {
		for (j = 0; j < K; j++) scanf("%d", A[i] + j);
		for (j = 0, n = 0; j < K; j++) n |= (A[i][j] << j);
		S.insert(n);
	}
	for (auto it1 = S.begin(); it1 != S.end(); ++it1) {
		for (auto it2 = S.begin(); it2 != S.end(); ++it2) {
			if (((*it1)&(*it2)) == 0) {
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}
