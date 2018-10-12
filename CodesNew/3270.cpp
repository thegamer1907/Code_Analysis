#include <stdio.h>
#include <algorithm>
using namespace std;

int N;
int A[100010];

int process(long long val) {
	long long ret = 0;
	for (int i = 1; i <= N; i++) {
		ret += val - A[i];
	}

	return ret >= val;
}
int main(void)
{
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) scanf("%d", A + i);

	sort(A + 1, A + 1 + N);
	
	long long left = A[N], right = 1e10;
	while (left < right) {
		long long mid = (left + right) / 2;
		if (process(mid)) right = mid;
		else left = mid + 1;
	}

	printf("%lld", left);
	return 0;
}