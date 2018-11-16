#include <stdio.h>

static int N;
static bool A[102];

static int sum_from(int from, int to) {
	int count = 0;
	int i;
	for (i = 0; i < from; ++i) {
		if (A[i]) {
			++count;
		}
	}
	for ( ; i <= to; ++i) {
		if (! A[i]) {
			++count;
		}
	}
	for ( ; i < N; ++i) {
		if (A[i]) {
			++count;
		}
	}
	return count;
}

int main() {
	scanf("%d\n", &N);
	for (int i = 0; i < N; ++i) {
		A[i] = getchar() != '0';
		getchar();
	}
	int answer = 0;
	for (int j = 0; j < N; ++j) {
		for (int i = 0; i <= j; ++i) {
			int s = sum_from(i, j);
			if (s > answer) {
				answer = s;
			}
		}
	}
	printf("%d\n", answer);
	return 0;
}
