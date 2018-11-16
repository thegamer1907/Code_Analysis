#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
int A[100010];
int B[100010];
int C[100010];

int main(void)
{
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) scanf("%d", A + i);
	for (int i = n; i >= 1; i--) {
		if (C[A[i]] == 0) B[i]++;
		C[A[i]] = 1;
		B[i] += B[i + 1];
	}

	int x = 0;
	for (int i = 1; i <= m; i++) {
		scanf("%d", &x);
		printf("%d\n", B[x]);
	}
	return 0;
}