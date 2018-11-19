#include <cstdio>
#include <cstring>

int N, a, b;
char S[3], A[101][3];

int main() {
	int i;
	scanf("%s", S);
	scanf("%d", &N);
	for (i = 1; i <= N; i++) scanf("%s", A + i);
	for (i = 1; i <= N; i++) {
		if (A[i][0] == S[0] && A[i][1] == S[1]) {
			puts("YES");
			return 0;
		}
		if (A[i][0] == S[1]) a = 1;
		if (A[i][1] == S[0]) b = 1;
	}
	if (a && b) {
		puts("YES");
	}
	else puts("NO");
	return 0;
}